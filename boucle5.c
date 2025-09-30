#include <stdio.h>
int main (){

int base , exposant , resultat ,i ;
 printf("entrer la base ");
 scanf("%d",&base);

 printf("entrer l exposant ");
 scanf("%d",&exposant);
resultat=1;
for (i=1;i<=exposant;i++)
resultat=resultat*base ;
printf("%d^%d=%d\n",base,exposant,resultat);


return 0 ;
}