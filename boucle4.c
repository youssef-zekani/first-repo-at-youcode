#include <stdio.h>
int main (){

int N , i ,S ;
 printf("entrer un nombre N");
 scanf("%d",&N);
S=0 ;

for (i=1;i<=N;i++)
S=S+i;
printf ("la somme des %d premier nombre est %d\n",N,S);


return 0 ;
}