#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
int a, b , c;
float delta,x1,x2,racine_delta;
printf("Entrez le 1er terme a:"); scanf("%d",&a);
printf("Entrez le 2eme terme b:"); scanf("%d",&b);
printf("Entrez le 3eme terme c:"); scanf("%d",&c);

delta = (b*b)-(4*a*c);

racine_delta = sqrtf(delta);



if(delta > 0.0){
 
    x1=(-(b*b) -(racine_delta))/2*a;
    x2=((b*b) +(racine_delta))/2*a;

    printf("solution x1=%.2f et x2=%.2f", x1,x2);
     
}
if(delta == 0.0){
  x1=(-b)/(2*a);
  printf("solution x1=x2=%.2f ", x1);
}
if (delta < 0.0)
{
  printf("il n'ya pas de solution");
}


}
