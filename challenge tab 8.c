#include <stdio.h>


int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

 int taboriginal[n], tabcopie[n];
 int i ;

  printf("Entrez les elements  de tableau original :\n");
    for (int i = 0; i < n; i++) {
        printf("element %d : ", i+1 );
}
        for (int i = 0; i < n; i++) {
        tabcopie[i] = taboriginal[i];
        }
printf("le tableau copie est :\n");
        for (int i = 0; i < n; i++) {
        printf("  %d \n", tabcopie[i]);}

return 0 ;
}