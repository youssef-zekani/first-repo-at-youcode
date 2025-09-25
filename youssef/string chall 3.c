#include <stdio.h>
#include<string.h>
int main() {
  
    char chaine1 [50];
    char chaine2 [50];


printf("entrer la chaine 1  :");
    fgets(chaine1,sizeof(chaine1),stdin);

printf("entrer la chaine 2  :");
    fgets(chaine2,sizeof(chaine2),stdin);

strcat (chaine1,chaine2);
printf("la concatene des deux caractere est : %s\n",chaine1);



    return 0;
}
