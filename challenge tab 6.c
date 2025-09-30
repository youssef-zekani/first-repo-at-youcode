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

    
int min = T[0];

    for (int i = 1; i < n; i++) {
        if (T[i] < min) {
            min = T[i];
        }
    }
    printf("Le petit element est : %d\n", min);
   

    return 0;
}