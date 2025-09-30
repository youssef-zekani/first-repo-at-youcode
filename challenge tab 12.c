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
        scanf("%d", &T[i]);
}
     int temp ;   
 for (int i = 0; i < n / 2; i++) {
    
     temp = T[i];
    T[i] = T[n - i - 1];
    T[n - i - 1] = temp;
}
printf("Le tableau inversé est :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);}


return 0 ;
 }