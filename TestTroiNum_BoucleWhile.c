#include <stdio.h>

int main()
{
    int i=0, j = 0;
    double max=.0;

    printf("Nombre d'element a tester: ");
    scanf("%d", &j);

    while (i<j)
    {

        float insertValue =.0;

        printf("Entrez la valeur %d :",i);

        scanf("%f", &insertValue);
      
        if(insertValue > max)max = insertValue;

        i++;
    }
    printf("la plus grande valeur est %f",max);
    
    return 0;
}
