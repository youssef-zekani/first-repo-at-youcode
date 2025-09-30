#include <stdio.h>

int main (){
    int N , i , F ;
  printf ("entre la valeur de N");
scanf("%d",&N);
F=1;
for (i=1;i<=N;i++)
    F= F*i;
    printf("%d!=%d",N,F);


    return 0 ;
}