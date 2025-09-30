#include <stdio.h>


int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

int T[n];
int i ;
  printf("Entrez les elements  de tableau original :\n");
    for (int i = 0; i < n; i++) {
        printf("element %d : ", i+1 );
        scanf("%d", &T[i]);}


printf("Les éléments impairs du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        if (T[i] % 2 != 0) 
            printf("%d ", T[i]);

    }



return 0;

}

