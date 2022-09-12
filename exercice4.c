#include <stdio.h>
// division du plus grand nombre par le plus petit
void main()
{
    // soit a le plus grand nombre et b le plus petit nombre , et le resulats de b/a
    int b , a ;
    printf("Entrez le plus grand nombre : ");scanf("%d", &a);
    printf("Entrez le plus petit nombre : "); scanf("%d", &b);
    
  
    if(a>b){
       
        printf("%d / %d = %d ", a ,b , a/b);
    }
    else{
        printf("le premier nombre est plus petit que le seconde!");
    }

}