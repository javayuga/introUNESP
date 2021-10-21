/* -------- Exemplo de função para calcular mdc---------*/
#include<stdlib.h>
#include<stdio.h> 

int calculo_mdc (int a, int b)
{
   int mdc, menor, divisor;
   mdc=1;
   
   if(a<b)
     menor=a;
   else 
     menor=b;
   
   for (divisor=2; divisor<=menor; divisor++) {
     if ( ((a&divisor)==0) && ((b%divisor)==0))
       mdc=divisor;
   }
   return mdc;
} 

int main()
{
  int x, y;
  
  printf("Digite o valor x: ");
  scanf("%d", &x);
  
  printf("Digite o valor y: ");
  scanf("%d", &y);
  
  printf("\nO mdc entre %d e %d eh %d.\n\n", x, y, calculo_mdc(x,y));
  
  system("PAUSE");
  return 0;
} 
