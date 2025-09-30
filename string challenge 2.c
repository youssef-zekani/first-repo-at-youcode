#include <stdio.h>

int main() {
    char texte[100];
    int i, longueur = 0;

    printf("Entrez une chaine de caracteres : ");
    scanf("%s", texte);  

    // Calcul la longueur
    for(i = 0; texte[i] != '\0'; i++) {
        longueur++     ;  
    }

    printf("La longueur de la chaine est : %d\n", longueur);
    
    return 0;
}
