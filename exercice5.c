#include <stdio.h>
//Ce programme a pour objectif basique de résoudre une équation du premier degré de la forme ax+b=0, ou ‘a’ est inférieur à ‘b’ 
 void main (){
    int a;
    int b;
    float res;



    printf(" Pour la forme ax+b=0, entrez la valeur de a :"); scanf("%d", &a);
    printf(" Pour la forme ax+b=0, entrez la valeur de b :"); scanf("%d", &b);
    res = -b/a;
    if(a>0){

        if(b>a){
            printf("l'equation de la forme %dx+%d=0 a pour solution : x=%f", a, b , res );
        }
        else{
            printf("ce programme ne resoud qu'une equation ou le terme a est inferieur à b");
        }
    }
    else{
        printf("a est inferieur à 0");
    }
}
