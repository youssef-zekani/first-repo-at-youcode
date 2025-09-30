#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    
    int T[n];
 
    printf("Entrez %d entiers :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &T[i]);
    }

    
    int s = 0;
    for (int i = 0; i < n; i++) {
        s =s+ T[i];
    }

    
    printf("La somme de elements est : %d\n", s);

    return 0;
}
