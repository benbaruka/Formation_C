#include<stdio.h>
//Exercice 3 Ecrire un programme qui détermine si un entier saisi est pair ou impair.
void main()
{
    //declaration de la variable 
    int nombre_saisi = 0;
    //l'utilisateur entre un nombre a l'ecran
    printf("Entrez un nombre:");
    scanf("%d", &nombre_saisi);
    //teste sur un nombre est pair ou impair
    if(nombre_saisi%2){
        printf("le nombre %d est impair",nombre_saisi);
    }
    else{
        printf("le nombre %d est pair",nombre_saisi);
    }
   
}