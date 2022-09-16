#include <stdio.h>
#include<stdlib.h>
#include<math.h>
//Ce programme a pour objectif basique de résoudre une équation du premier degré de la forme ax+b=0,  

int main(){
       float a,b,x;
       printf("\n Entrez a: ", a);
       scanf("%f", &a);

       printf("\n Entrez b: ", b);
       scanf("%f", &b);
       x=-b/a;
       if (a>0)
       {
        /* le test de a */
         printf(" la solution est x = %f\n",x);

       }
       else{
        printf("\n a est inferieur ou egale à 0");
       }
       
      
       return 0;
}
