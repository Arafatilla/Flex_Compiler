%{
    
          #include "syntax.tab.h"
          #include "TS.h"
          extern YYSTYPE yylval;
          extern int nb_ligne;
          extern int Col;

%}
/* -- les Expressions régulières -- */

lettre [a-zA-Z]
chiffre [0-9]
IDF [a-zA-Z][a-zA-Z0-9_]*
CST {chiffre}+
CST_FLOAT [0-9]+\.[0-9]+ 
TEXT \"[^\"]*\"
COMENT_SIMPLE "--".*"##" 
COMENT_MULTI_LIGNE "{-"([^'-']|\\n)*"-}"



%%
DEBUT   {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_DEB; }
EXECUTION {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_EXC; }
FIN  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_FIN; }
NUM  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_NUM; }
REAL  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_REAL; }
TEXT  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_TXT; }
FIXE  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_FIX; }
SI   {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_SI; }
SINON  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_SNON; }
TANTQUE  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_TQ; }
FAIRE  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_FAIRE; }
ALORS  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_ALORS; }
ET   {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_ET; }
OU   {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_OU; }
NON  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_NON; }
lire   {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng; return MC_LIRE; }
affiche  {rechercher(yytext,"Mot cle",0,"","",0,2); Col= Col+yyleng;  return MC_AFFICHE; }
{COMENT_SIMPLE}  {
    
    yylval.str = strdup(yytext); 
    Col = Col + strlen(yytext);              
    return COMENT_1;            
}

{COMENT_MULTI_LIGNE} {
    yylval.str = strdup(yytext); 
    int i;
    for ( i = 0; yytext[i] != '\0'; i++) {
        if (yytext[i] == '\n') nb_ligne++;  
    }
    Col = Col + yyleng;  
    return COMENT; 
}


{TEXT}  {
            yylval.str = strdup(yytext); 
            Col=Col+strlen(yytext);
            
            return STRING; 
            }
{CST_FLOAT} {
           rechercher(yytext,"CST","","","",0,1); 
           yylval.floatval = atof(yytext);
           Col= Col+strlen(yytext);
          
           return CST_FLOAT;
            }

{CST} {
yylval.entier=atoi(yytext);
              rechercher(yytext,"CST","","","",0,1); 
              Col= Col + strlen(yytext); 
			  
			  return CST;
		  }

{IDF} {

yylval.str=strdup(yytext);
			  
            
			  if (yyleng>10) printf ("Erreur Lexical: IDF trop long a la ligne %d a la colonne %d \n",nb_ligne, Col);
                                     
              else{ 
			  return IDF;
              }
}



[;,=/+\*<>:\[\]()\"]   { rechercher(yytext,"Separateur",0,"","",0,3); Col= Col + strlen(yytext);  return yytext[0];}
"!="   { rechercher(yytext,"Separateur",0,"","",0,3); Col= Col + strlen(yytext);   return NOTE;}
"<="   { rechercher(yytext,"Separateur",0,"","",0,3); Col= Col + strlen(yytext);   return INFE;}
">="  { rechercher(yytext,"Separateur",0,"","",0,3); Col= Col + strlen(yytext);   return SUPE;}
"<-"    { rechercher(yytext,"Separateur",0,"","",0,3); Col= Col + strlen(yytext);   return AFF;}
"-"   { rechercher(yytext,"Separateur",0,"","",0,3); Col= Col + strlen(yytext);   return MOINS;}
"{"  { rechercher(yytext,"Separateur",0,"","",0,3); Col= Col + strlen(yytext);  return ACCO;}
"}" { rechercher(yytext,"Separateur",0,"","",0,3); Col= Col + strlen(yytext);   return ACCF;}



[ \t] { Col++; }
\n {nb_ligne++; Col=1;}
. {printf ("erreur lexical sur l'entite %s a la ligne %d a la colonne %d",yytext,nb_ligne,Col); return ERR;}
%%