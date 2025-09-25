#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    
    printf("Entrez la première chaîne : ");
    fgets(str1,sizeof(str1),stdin);
 
    printf("Entrez la deuxième chaîne : ");
fgets(str1,sizeof(str1),stdin);
    
    if (strcmp(str1, str2) == 0) {
        printf("Les chaînes sont égales.\n");
    } else {
        printf("Les chaînes sont différentes.\n");
    }

    return 0;
}
