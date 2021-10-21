#include<stdlib.h>
#include<stdio.h> 

int determinar_primo(int num)
{
  int  i, resultado;

  resultado = 0;
  for (i=1; i<=num; i++) {
    if ((num%i)==0)
      resultado++;
  }
  if(resultado == 2){
   return 1;   
  }
  return 0;    
}

int main()
{
  
  int primo, entrada;
  
  printf("Hoje vamos verificar se numeros sao primos, ou nao...\n");
  printf("Insira um numero: ");
  scanf("%d", &entrada);  

  primo=determinar_primo(entrada);
  
  if(primo==1)
   printf("O numero %d eh primo :) \n", entrada);   
  
  else
   printf("O numero %d nao eh primo :( \n", entrada); 
  
   
  system("PAUSE");
  return 0;   
    
}
