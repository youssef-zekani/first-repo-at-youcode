#include <stdio.h>

// Fonction qui calcule la factorielle d’un entier positif
int factorielle(int n) {
    int f = 1;

    for (int i = 1; i <= n; i++) {
        f = f * i;
    }

    return f;
}

int main() {
    int n ,F;

    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : la factorielle est negatif.\n");
        return 1;
    }

     F = factorielle(n);

    printf("La factorielle de %d est : %d\n", n, F);

    return 0;
}
