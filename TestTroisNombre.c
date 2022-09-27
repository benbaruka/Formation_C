#include <stdio.h>
 
int main()
{
    int num1, num2, num3, max;
 
    /* Fournir les données d'entrée */
      printf("Saisir 1 nombres: "); scanf("%d", &num1);
   
      printf("Saisir 2 nombres: "); scanf("%d", &num2);
   
      printf("Saisir 3 nombres: "); scanf("%d", &num3);
 

     
 
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            /* si num1 > num2 et num1 > num3 */
            max = num1;
        }
        else
        {
            /* si num1 > num2 mais num1 > num3 est fausse */
            max = num3;
        }
    }
    else
    {
        if(num2 > num3)
        {
            /* Si num1 < num2 et num2 > num3 */
            max = num2;
        }
        else
        {
            /* si num1 < num2 et num2 > num3 */
            max = num3;
        }
    }
     
    /* afficher le résultat */
    printf("le maximum est = %d", max);
 
    return 0;
}