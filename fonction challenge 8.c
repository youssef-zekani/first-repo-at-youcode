#include <stdio.h>


int pairite (int n) {
    if (n % 2 == 0)
        printf("le nombre n est pair ");
    else
         printf("le nombre n est impair");
}

int main() {
    int n;

    printf("Entrez un entier: ");
    scanf("%d", &n);
pairite(n);
    return 0;
}
