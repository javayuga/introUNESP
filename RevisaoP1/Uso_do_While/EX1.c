#include<stdlib.h>
#include<stdio.h> 

/*crie um algoritmo que imprima a tabuada de 1 a 10 */

int main()
{
 int num, valor, i;
 i=1;
 
 printf("Informe o numero inteiro desejado: ");
 scanf("%d", &num);

 while (i<=10) {
   valor=num*i;
   printf(" %d x %d = %d\n ", num, i, valor);
   i++;
 }
  system("PAUSE");
  return 0;   
    
}
