#include <stdio.h>
//Programme qui calculer le produit de deux nombres nbr1 et nbr2 entrEs par l'utilisateur
int main(void)
{
    //declaration de ces deux variable nbr1 et nbr2
  int nbr1, nbr2;

//on entre le deux nombres a l'ecran
  printf("Entrez le premier facteur: "); scanf("%d",&nbr1);

  printf("Entrez le deuxieme facteur: "); scanf("%d",&nbr2);
  // calcul du produit et affichage de resultat a l'ecran

  printf("le produit de %d et %d = %d" , nbr1 , nbr2 , nbr1*nbr2);




}