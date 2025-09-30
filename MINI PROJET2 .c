#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[50];
    char telephone[20];
    char email[50];
} Contact;

Contact c1[100];  
int totalContacts = 0;  

// Ajouter un contact
void ajouterContact() {
    printf("Nom : ");
    fgets(c1[totalContacts].nom, 50, stdin);

    printf("Téléphone : ");
    fgets(c1[totalContacts].telephone, 20, stdin);

    printf("Email : ");
    fgets(c1[totalContacts].email, 50, stdin);

    totalContacts++;
    printf("Contact ajouté !\n");
}

// afficher liste contact ;
void afficherContacts() {
if (totalContacts == 0) {
        printf(" Aucun contact.\n");
    } else {
          printf("\n**** Liste des Contacts ***\n");
    for (int i = 0; i < totalContacts; i++) {
      printf("%d\n",i+1);
         printf("%s\n",c1[i].nom);
         printf("%s\n",c1[i].telephone);
        printf("%s\n",c1[i].email);
                       
   } }
}

 
// Modifier un contact 
void modifierContact() {
    char nom[50];
    printf("Nom du contact modifier : ");
    fgets(nom, 50, stdin);

    int trouve = 0;
    for (int i = 0; i < totalContacts; i++) {
        if (strncmp(c1[i].nom, nom, 50) == 0) {
         printf("Nouveau telephone : ");
       fgets(c1[i].telephone, 20, stdin);

            printf("Nouvel email : ");
            fgets(c1[i].email, 50, stdin);

            printf(" Contact modifié !\n");
            trouve = 1;
            break;
        }
    }}
void supprimerContact() {
    char nom[50];
    printf("Nom du contact à supprimer : ");
    fgets(nom, 50, stdin);

    int trouve = 0;
    for (int i = 0; i < totalContacts; i++) {
        if (strncmp(c1[i].nom, nom, 50) == 0) {
            c1[i] = c1[totalContacts - 1]; 
            totalContacts--;
            printf("Contact supprimé !\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf(" Contact non trouvé.\n");
    }
}

// Rechercher un contact 
void rechercherContact() {
    char nom[50];
    printf("Nom du contact à rechercher : ");
    fgets(nom, 50, stdin);

    int trouve = 0;
    for (int i = 0; i < totalContacts; i++) {
        if (strncmp(c1[i].nom, nom, 50) == 0) {
            printf(" %s | %s | %s\n",
           c1[i].nom,      c1[i].telephone,
                  c1[i].email);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf(" Contact non trouvé.\n");
    }
}


int main() {
    int choix;

    do {
        printf("\n     Menu   \n");
        printf("1. Ajouter un contact\n");
        printf("2. affichercontacts\n");
        printf("3. modifier contacts\n");
        printf("4. supprimer un contact\n");
        printf("5. Rechercher un contact\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);
        getchar(); 

        switch (choix) { 
            case 1: ajouterContact(); break;
            case 2: afficherContacts(); break;
            case 3: modifierContact(); break; 
            case 4 :supprimerContact();break; 
            case 5 :rechercherContact ; break ;
            
            case 0: printf(" Fin du programme.\n"); break;
            default: printf(" Choix invalide.\n"); break;
        }
    } while (choix != 0);

    return 0;
}