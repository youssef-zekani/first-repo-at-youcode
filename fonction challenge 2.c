#include <stdio.h>

// Fonction qui calcule le produit
int produit(int A, int B) {
    int P;
    P = A * B;
    return P;
}

int main() {
    int A, B, P;

    printf("Entrer une valeur pour A : \n");
    scanf("%d", &A);

    printf("Entrer une valeur pour B : \n");
    scanf("%d", &B);

    P = produit(A, B);

    printf("Le produit de A et B est : %d\n", P);

    return 0;
}
