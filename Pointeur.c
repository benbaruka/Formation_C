#include <stdio.h>
void Iserte(a,b){

int remplacVar= 0;

printf("avant a=%d et b=%d",a, b);

remplacVar=b;
b=a;
a=remplacVar;

printf("apres a=%d et b=%d",a,b);

}
int main(void){
    int a =20;
    int b = 30;
       
   Iserte(a,b);


}