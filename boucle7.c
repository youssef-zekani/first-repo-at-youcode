#include <stdio.h>
int main (){

int  N ,FP , FPP , FN ,i ;
do {
 printf("entrer un nombre N  :");
 scanf("%d",&N);};
 while (N<2);
 FPP =0;
 FP= 1;
printf("les terme de fibonatchi est : \n");
printf("FPP=%d\n",FPP);
printf("FP=%d\n",FP);

for (i=2;i<=N;i++) {
FN = FPP +FP ;
printf ("F%d = %d \n",i,FN);
FPP=FP ;
FP = FN;
}



return 0 ;
}