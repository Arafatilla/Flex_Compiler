%{
 #include "stdio.h"
 #include "string.h"
 int nb_ligne=1;
 int Col=1;
 void yyerror(char *msg);
 char* current_type;

%}
%start S

/* Déclaration des types */
%union {
    int entier;
    char* str;
    float floatval;
}


%token MC_DEB MC_FIN MC_EXC  MC_FIX  MC_SI MC_SNON MC_TQ MC_OU MC_ALORS ACCO 
%token MC_FAIRE MC_LIRE MC_AFFICHE MC_NON INFE SUPE NOTE AFF MC_ET MOINS ACCF 
%token <str> MC_NUM <str> MC_REAL <str> IDF  <str> MC_TXT <str> STRING <str> COMENT_SIMPLE<str> COMENT_MULTI_LIGNE
%token <entier> CST
%token <floatval> CST_FLOAT
%type <str> TYPE
%type <str> LISTEIDF
%type <entier> EXP EXPPRIME TERME TERMEPRIME FACTEURS 



%left MC_OU
%left MC_ET
%left MC_NON
%left '<' '>' SUPE INFE '=' NOTE
%left '+' MOINS
%left '*' '/'
 

%%


S:
    MC_DEB DECLARATIONS   MC_EXC BLOCINSTR  MC_FIN { printf ("programme valide. \n"); YYACCEPT;}
;

DECLARATIONS:  
            DECLARATION DECLARATIONS
            |COMENT_SIMPLE DECLARATIONS
            |COMENT_MULTI_LIGNE DECLARATIONS
            | 
            ;

DECLARATION:
           TYPE ':' LISTEIDF ';'  


           | MC_FIX TYPE ':' IDF '=' CST ';' { printf("constante declaré : %s de type %s\n", $4, now_type);
                if (isDeclared($4)){
                 printf("Erreur semantique : Variable '%s' deja declaré , a la ligne %d a la colonne %d\n", $4,nb_ligne,Col);exit(1);
              };  
                rechercher($4,"IDF",now_type,"","FIXE",0,1);
                 Col= Col + strlen($4);
              }

           |MC_FIX TYPE ':' IDF '=' MOINS CST ';' { printf("constante declaré : %s de type %s\n", $4, now_type);
                if (isDeclared($4)){
                 printf("Erreur semantique : Variable '%s' deja declaré , a la ligne %d a la colonne %d\n", $4,nb_ligne,Col);exit(1);
              };  
                rechercher($4,"IDF",now_type,"","FIXE",0,1);
                 Col= Col + strlen($4);
              }


           |MC_FIX TYPE ':' IDF '=' CST_FLOAT ';' { printf("constante declare : %s de type %s\n", $4, now_type);
                if (isDeclared($4)){
                 printf("Erreur semantique : Variable '%s' deja declaré , a la ligne %d a la colonne %d\n", $4,nb_ligne,Col);exit(1);
              };  
                rechercher($4,"IDF",now_type,"","FIXE",0,1);
                 Col= Col + strlen($4);
              }
           
           |MC_FIX TYPE ':' IDF '=' MOINS CST_FLOAT ';' { printf("constante declaré : %s de type %s\n", $4, now_type);
                if (isDeclared($4)){
                 printf("Erreur semantique : Variable '%s' deja declaré , a la ligne %d a la colonne %d\n", $4,nb_ligne,Col);exit(1);
              };  
                rechercher($4,"IDF",now_type,"","FIXE",0,1);
                 Col= Col + strlen($4);
            
              }
             
;

TYPE:
     MC_NUM  { now_type = "int"; $$ = now_type; }
     |MC_REAL  { now_type = "float"; $$ = now_type; }
     |MC_TXT  { now_type = "string"; $$ = now_type; }
;

LISTEIDF:
        IDF { printf("Identifiant declaré : %s de type %s\n", $1, now_type);
              if (isDeclared($1)){
               printf("Erreur semantique : Variable '%s' deja declaré, a la ligne %d a la colonne %d\n", $1,nb_ligne,Col);exit(1);
              }
                 rechercher($1,"IDF",now_type,"","",0,1);
                 Col= Col + strlen($1); 
              }
 

        |IDF '[' CST ']' ',' LISTEIDF { printf("Tableau declaré : %s[%d] de type %s\n", $1, $3, now_type);
                    if (isDeclared($1)) {
                 printf("Erreur semantique : Variable '%s' deja declaré,  a la ligne %d a la colonne %d\n", $1,nb_ligne,Col);exit(1);
              } 
                 rechercher($1,"IDF",now_type,"","",$3,1); 
                 Col= Col + strlen($1);  }


        | IDF ',' LISTEIDF  { printf("Identifiant declaré : %s de type %s\n", $1, now_type); 
                       if (isDeclared($1)) {
                 printf("Erreur semantique : Variable '%s' deja declaré , a la ligne %d a la colonne %d\n", $1,nb_ligne,Col);exit(1);
              } 
                 rechercher($1,"IDF",now_type,"","",0,1); 
                 Col= Col + strlen($1);    
                 }
        |IDF '[' CST ']' { printf("Tableau declaré : %s[%d] de type %s\n", $1, $3, now_type);
                    if (isDeclared($1)) {
                 printf("Erreur semantique : Variable '%s' deja declaré , a la ligne %d a la colonne %d\n", $1,nb_ligne,Col);exit(1);
              } 
                 rechercher($1,"IDF",now_type,"","",$3,1); 
                 Col= Col + strlen($1);
        
        }
  ;

BLOCINSTR:
          ACCO INST ACCF
  ;

INST: 
      INSTRUCTION INST
      |COMENT_SIMPLE INST
      |COMENT_MULTI_LIGNE INST
      | ;

INSTRUCTION:
           AFFECTATION
           |CONDITION
           |BOUCLE
           |LECTURE
           |AFFICHAGE
           
           
  ;

AFFECTATION:
           IDF AFF  EXP ';'{
            if (!isDeclared($1)) {
                printf("Erreur semantique: Variable '%s' non declaré, a la ligne %d a la colonne %d\n", $1,nb_ligne,Col);
                exit(1);
            }
            if (!isFixe($1)){
               printf("Erreur semantique: Impossible de faire la modification d'une valeur constante, a la ligne %d a la colonne %d\n",nb_ligne,Col);exit(1);
            }
            if (!isCompatible($1 , $3)){
               printf("Erreur semantique: Icompatibilté de type, a la ligne %d a la colonne %d\n",nb_ligne,Col);exit(1);
            }
          
           
        }
           
          |IDF '[' CST ']' AFF  EXP ';'{
            if (!isDeclared($1)) {
                printf("Erreur semantique: Variable '%s' non declaré, a la ligne %d a la colonne %d\n", $1,nb_ligne,Col);
                exit(1);
            }
            if (!isFixe($1)){
               printf("Erreur semantique: Impossible de faire la modification d'une valeur constante, a la ligne %d a la colonne %d\n",nb_ligne,Col);exit(1);
            }
            if( $3 > getTaille($1)){
                printf("Erreur semantique : Depassement de la taille d un tableau, a la ligne %d a la colonne %d\n",nb_ligne,Col);exit(1);
            }
            
        }

          | IDF AFF STRING ';' { if (!isDeclared($1)) {
                printf("Erreur semantique : Variable '%s' non declaré.a la ligne %d a la colonne %d\n", $1,nb_ligne,Col);
                exit(1);
            }
             
        }
           
    ;

CONDITION:
          MC_SI '(' CONDITIONEXP ')' MC_ALORS BLOCINSTR 
          |MC_SI '(' CONDITIONEXP ')' MC_ALORS BLOCINSTR MC_SNON BLOCINSTR 
   ; 

  BOUCLE:
        MC_TQ '(' CONDITIONEXP ')' MC_FAIRE BLOCINSTR
    ;

CONDITIONEXP:
          CONDITIONSIMPLE CONDITIONLIEE
  ;

CONDITIONLIEE:
                  MC_ET CONDITIONSIMPLE CONDITIONLIEE
                  |MC_OU CONDITIONSIMPLE CONDITIONLIEE
                  |
    ;

CONDITIONSIMPLE:
                MC_NON CONDITIONSIMPLE
                | '('CONDITIONEXP ')'
                |EXP COMPARATEUR EXP
  ;

EXP:
    TERME EXPPRIME
  ;

EXPPRIME:
         '+' TERME EXPPRIME {$$=$$ + $2 }
         |MOINS TERME EXPPRIME  {$$= $$- $2}
         | {$$= 0;}
  ;

TERME:
      FACTEURS TERMEPRIME
  ;

TERMEPRIME:
           '*' FACTEURS TERMEPRIME {$$= $$ * $2}
           |'/' FACTEURS TERMEPRIME {
          if ( $2 ==0  ) { 
              printf("Erreur semantique :Division par 0, a la ligne %d a la colonne %d\n",nb_ligne,Col);
              exit(1); 
          } else {
              $$ = $$ / $2;
          }
      }
           | {$$=0;}
  ;

FACTEURS:
          '(' EXP ')' {$$=$2}

          | CST {($$=$1)}

          | MOINS CST  {($$=$2)}

          |IDF {if (!isDeclared($1)) {
                printf("Erreur semantique : Variable '%s' non declaré, a la ligne %d a la colonne %d\n", $1,nb_ligne,Col);
                exit(1);
            }
             
            
            }
          |CST_FLOAT {($$=(int)$1)}

          | MOINS CST_FLOAT {($$=(int)$2)} 

          |IDF '[' CST ']' {if (!isDeclared($1)) {
                printf("Erreur semantique : Variable '%s' non declaree, a la ligne %d a la colonne %d\n", $1,nb_ligne,Col);
                exit(1);
            }
            
            if( $3 > getTaille($1)){
                printf("Erreur semantique : Depassement de la taille d un tableau, a la ligne %d a la colonne %d\n",nb_ligne,Col);exit(1);
            }
            
            }
          
  ;
  

COMPARATEUR:
            INFE
            | '>'
            | '<'
            | SUPE
            | '='
            | NOTE
  ;
          

LECTURE:
       MC_LIRE '(' IDF ')' ';'
       
  ;

AFFICHAGE: 
         MC_AFFICHE '('STRING ')' ';'
         |MC_AFFICHE '(' STRING ',' IDF ')' ';'
  ;
       

      

      
%%

void yyerror(char *msg) {
    printf("Erreur syntaxique %s, a la ligne %d a la colonne %d\n", msg, nb_ligne,Col);
    
}
main ()
{ 
  
  yyparse();
  afficherTS();
  afficherM();
  afficherS();
  libererTS();
  libererM();
  libererS();

    return 0;
}
yywrap (){
  
}
