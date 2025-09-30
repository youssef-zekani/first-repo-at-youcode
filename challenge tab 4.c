#include <stdio.h>

int main() {
    int n;

   
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

   
    int T[n];

    printf("Entrez les elements ");
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &T[i]);
    }

    
int max = T[0];

    for (int i = 1; i < n; i++) {
        if (T[i] > max) {
            max = T[i];
        }
    }
    printf("Le grand element du tableau est : %d\n", max);
   

    return 0;
}
