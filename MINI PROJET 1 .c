#include <stdio.h>
#include <string.h>

int main() {
    char titres[100][50];
    char auteurs[100][50];
    float prix[100];
    int quantite[100];
    int n = 0;
    int choix;
    char rech[50];
    int i, j, trouve, nouvelle_qte;

    do {   //afficher le Menu 
        printf("\n===== Menu Gestion de Stock =====\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre par titre\n");
        printf("4. Mettre a jour la quantite\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);
switch(choix) {
            case 1:       //demander a l utilisateur d entrer les info de livre :
                printf("Titre (un mot) : ");
                scanf("%s", titres[n]);
                printf("Auteur (un mot) : ");
                scanf("%s", auteurs[n]);
                printf("Prix : ");
                scanf("%f", &prix[n]);
                printf("Quantite : ");
                scanf("%d", &quantite[n]);
                n++;
                break;
                      //affiche liste des livres :
            case 2:
                printf("\n^^^^^ Liste des livres^^^^^\n");
                for(i = 0; i < n; i++) {
                    printf("Titre: %s | Auteur: %s | Prix: %.2f | Quantite: %d\n",
                           titres[i], auteurs[i], prix[i], quantite[i]);
                }
                break;
                         //rechercher un livre par son titre :
            case 3:
                printf("Entrer le titre a rechercher : ");
                scanf("%s", rech);
                trouve = 0;
                for(i = 0; i < n; i++) {
                    if(strcmp(titres[i], rech) == 0) {
                        printf("Trouve: %s | Auteur: %s | Prix: %.2f | Quantite: %d\n",
                               titres[i], auteurs[i], prix[i], quantite[i]);
                        trouve = 1;
                        break;
                    }
                }
                if(trouve == 0) 
                    printf("Livre non trouve.\n");
                break;
case 4:          
                printf("Entrer le titre du livre pour mise a jour : ");
                scanf("%s", rech);
                trouve = 0;
                for(i = 0; i < n; i++) {
                    if(strcmp(titres[i], rech) == 0) {
                        printf("Nouvelle quantite : ");
                        scanf("%d", &nouvelle_qte);
                        quantite[i] = nouvelle_qte;
                        printf("Quantite mise a jour !\n");
                        trouve = 1;
                        break;
                    }
                }
                if(trouve == 0) 
                    printf("Livre non trouve.\n");
                break;
case 5:
                printf("Entrer le titre du livre a supprimer : ");
                scanf("%s", rech);
                trouve = 0;
                for(i = 0; i < n; i++) {
                    if(strcmp(titres[i], rech) == 0) {
                        for(j = i; j < n-1; j++) {
                            strcpy(titres[j], titres[j+1]);
                            strcpy(auteurs[j], auteurs[j+1]);
                            prix[j] = prix[j+1];
                            quantite[j] = quantite[j+1];
                        }
                        n--;
                        printf("Livre supprime avec succes.\n");
                        trouve = 1;
                        break;
                    }
                }
                if(trouve == 0) 
                    printf("Livre non trouve.\n");
                break;
case 6:
                {
                    int total = 0;
                    for(i = 0; i < n; i++) {
                        total =total+quantite[i];
                    }
                    printf("Nombre total de livres en stock : %d\n", total);
                }
                break;

            case 0:
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide !\n");
        }
    } while(choix != 0);

    return 0;
}