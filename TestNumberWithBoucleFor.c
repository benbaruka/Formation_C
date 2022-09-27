#include <stdio.h>
int main(){
    int i=0 , j=0;
    float max =.0;
    printf("Entrez le nombre d'elements a tester:");scanf("%d",&j);
    for(i=0; i<j ; i++){
        float value=.0;
        printf("Entrez la valeur %d :",i);scanf("%f",&value);
        if( value > max )max=value;  
    }
    printf("le plus grand est %f",max);
    return 0;}