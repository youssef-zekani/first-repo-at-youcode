#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int T[n];

    printf("Entrez %d entiers :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &T[i]);
    }
int somme ;
int moyenne ;
    
    somme = 0;
    for (int i = 0; i < n; i++) {
        somme += T[i];
    }

     moyenne = somme / n;


    printf("La moyenn est : %d\n", moyenne);

    return 0;
}