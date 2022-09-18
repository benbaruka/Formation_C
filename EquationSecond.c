#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
int a, b , c;
float deltat,x1,x2;
printf("Entrez le 1er terme a:"); scanf("%d",&a);
printf("Entrez le 2eme terme b:"); scanf("%d",&b);
printf("Entrez le 3eme terme c:"); scanf("%d",&c);

deltat = (b*b)-(4*a*c);

if(deltat > 0.0){
 
    x1=(-(b*b) -(deltat))/2*a;
    x2=((b*b) +(deltat))/2*a;

    printf("solution x1=%.2f et x2=%.2f", x1,x2);
     
}
if(deltat == 0.0){
  x1=(-b)/(2*a);
  printf("solution x1=x2=%.2f ", x1);
}
if (deltat < 0.0)
{
  printf("il n'ya pas de solution");
}


}
