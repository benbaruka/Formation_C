#include<stdio.h>
//Ecrire un programme qui affiche les code SCII des lettres et des chiffres 
void main (){
    //declaration de la variable
char lettre;

printf("Entrez une lettre:");
//l'utilisateur entre une caractere du type string A l'Ecran 
scanf("%c",&lettre);
//resultat du programme
printf("les code SCII de la lettre '%c' est code = %d , et son code hexa = %x", lettre,lettre,lettre);
}
