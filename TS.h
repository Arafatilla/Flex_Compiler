
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structure des TS- 

typedef struct NodeTS {
    char name[20];
    char code[20];
    char type[20];
    char val[20];
    char fixe[20];
    int taille;
    struct NodeTS* next; 
} NodeTS;

typedef struct NodeSM {
    char name[20];
    char type[20];
    struct NodeSM* next; 
} NodeSM;

// Têtes des listes chaînées
NodeTS* TS = NULL;     
NodeSM* TS_MC = NULL;
NodeSM* TS_S = NULL; 




/* 2- Fonction d'insertion des entités lexicales ***/

void insererTS(const char* name, const char* code, const char* type, const char* val, const char* fixe, int taille) {

   
    NodeTS* newNode = (NodeTS*)malloc(sizeof(NodeTS));
    if (newNode == NULL) {
     
        exit(1);
    }

    
    strcpy(newNode->name, name);
    strcpy(newNode->code, code);
    strcpy(newNode->type, type);
    strcpy(newNode->val, val);
    strcpy(newNode->fixe, fixe);
    newNode->taille = taille;

    
    newNode->next = TS;
    TS = newNode;

    
}

//insere tabM tabS
void insererSM(NodeSM** head, const char* name, const char* type) {
  

    NodeSM* newNode = (NodeSM*)malloc(sizeof(NodeSM));
    if (newNode == NULL) {
       
        exit(1);
    }

    strcpy(newNode->name, name);
    strcpy(newNode->type, type);

    
    newNode->next = *head;
    *head = newNode;

   
}

//isCompatible
int isCompatible(const char* type1, const char* type2) {
    
    if (strcmp(type1, type2) == 0) {
        return 1;  // oui
    }
    else return 0;
}





//getTaille
int getTaille(const char* name) {
    NodeTS* current = TS;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current->taille; // Retourner la taille
        }
        current = current->next;
    }
    return -1; 
}



//isFixe
int isFixe(const char* name) {
    NodeTS* current = TS;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0 && strcmp(current->fixe, "") == 0) {
            return 1; // Symbole non fixe
        }
        current = current->next;
    }
    return 0; // Symbole est fixe
}


//IS DECLARED
int isDeclared(const char* name) {
    NodeTS* current = TS;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return 1; // Symbole trouvé
        }
        current = current->next;
    }
    return 0; // Symbole non trouvé
}




//GET TYPE
const char* getType(const char* name) {
    NodeTS* current = TS;
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current->type; // Retourner le type
        }
        current = current->next;
    }
    return NULL; // Symbole non trouvé
}



// Fonction Rechercher 
void rechercher(const char* entite, const char* code, const char* type, const char* val, const char* fixe, int t, int y) {
    NodeTS* current;
    NodeSM* currentM;
    NodeSM* currentS;

    switch (y) {
        case 1: 
            current = TS;
            while (current != NULL) {
                if (strcmp(current->name, entite) == 0) {
                   
                    return; // L'entité existe déjà
                }
                current = current->next;
            }
            
            insererTS(entite, code, type, val, fixe, t);
            break;


        case 2: 
            currentM = TS_MC;
            while (currentM != NULL) {
                if (strcmp(currentM->name, entite) == 0) {
                   
                    return; // Le mot-clé existe déjà
                }
                currentM = currentM->next;
            }
            
            insererSM(&TS_MC, entite, code);
            break; 

        case 3: 
            currentS = TS_S;
            while (currentS != NULL) {
                if (strcmp(currentS->name, entite) == 0) {
                    
                    return; // Le séparateur existe déjà
                }
                currentS = currentS->next;
            }
           
            insererSM(&TS_S, entite, code);
            break;
    }
}


/*Fonction d'affichage de la TS */

void afficherTS() {
    printf("/**************************Table des symboles IDF*******************************/\n");
    printf("___________________________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite | FIXE | Taille\n");
    printf("___________________________________________________________________________________\n");

    NodeTS* current = TS;
    while (current != NULL) {
        printf("\t|%11s |%13s | %12s | %9s | %5s | %8d |\n",
               current->name, current->code, current->type, current->val, current->fixe, current->taille);
        current = current->next;
    }
}

void afficherM() {
   printf("\n/***************Table des symboles mots cles*************/\n");
   printf("_____________________________________\n");
   printf("\t| NomEntite |  CodeEntite | \n");
   printf("_____________________________________\n");

    NodeSM* current = TS_MC;
    while (current != NULL) {
        printf("\t|%10s |%12s | \n", current->name, current->type);
        current = current->next;
    }
}

void afficherS(){

  printf("\n/*******Table des symboles separateurs********/\n");
  printf("_____________________________________\n");
  printf("\t| NomEntite |  CodeEntite | \n");
  printf("_____________________________________\n");

  NodeSM* current = TS_S;
    while (current != NULL) {
        printf("\t|%10s |%12s | \n", current->name, current->type);
        current = current->next;
    }
}

void libererTS() {
    NodeTS* current;
    while (TS != NULL) {
        current = TS;
        TS = TS->next;
        free(current);
    }
}

void libererM() {
    NodeSM* current = TS_MC;
    while (current != NULL) {

        current= current->next;
        free(current);
    }
}

void libererS() {
    NodeSM* current = TS_S;
    while (current != NULL) {
        
        current= current->next;
        free(current);
    }
}
