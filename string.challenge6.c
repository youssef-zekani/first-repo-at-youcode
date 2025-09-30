#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char n;
    int i;
    int count =0;

    printf("Entrez la première chaîne : ");
    fgets(str,sizeof(str),stdin);

    printf("entrer le caractere a rechercher  :");
    scanf(" %c",&n);
 
    for (i=0;i<strlen(str);i++){
if (str[i]==n) {
    count++ ;
}
    }
printf("le nombre d occurence  est :%d ",count);

    return 0 ;
}