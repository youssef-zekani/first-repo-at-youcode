#include <stdio.h>
#include<string.h>

int main (){

char chaine [100];
int i ;

printf ("veuiller entrer la chaine Majuscule ");
fgets (chaine,sizeof(chaine),stdin);

for (i=0;chaine[i]!='\0';i++){

    if (chaine[i]>='A' && chaine [i]<='Z' ){
    chaine[i]=chaine[i]+32;
    }
}


printf("la chaine  miniscule est %s: ",chaine);




    return 0  ;
}