#include <stdio.h>

  int somme (int A, int B ) {
  int S ;
    S = A + B ;
    return S ;
}

int main (){
    int A , B ,S ;
 printf ("entrer une valeur pour A   \n");
 scanf("%d",&A);
printf ("entrer une valeur pour B  \n");
 scanf("%d",&B);
   
 S = somme (A,B);
 printf ("la somme de A et B   : %d ", S);


    return 0 ;
}