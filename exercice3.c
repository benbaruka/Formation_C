#include<stdio.h>
//Exercice 3 Ecrire un programme qui détermine si un entier saisi est pair ou impair.
void main()
{
    int nombre_saisi = 0;
    
    printf("Entrez un nombre:",nombre_saisi);
    scanf("%d", &nombre_saisi);
    if(nombre_saisi%2){
        printf("le nombre %d est impair",nombre_saisi);
    }
    else{
        printf("le nombre %d est pair",nombre_saisi);
    }
   
}