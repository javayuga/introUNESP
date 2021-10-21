#include<stdlib.h>
#include<stdio.h> 

int determinar_primo(int num)
{
  int  i, resultado;

  resultado = 0;
  
  for (i=1; i<=num; i++) {          //   Aqui verificamos se o resto da divisão 
    if ((num%i)==0)                 // de um numero por i é zero. Se for, adi-
      resultado++;                  // ciona 1 para garantir que o prox. é ímpar
  }
  if(resultado == 2){               //  Se esse resultado (o qual adc. 1) for 
   return 1;                        // igual a 2, retorna 1 (primo). Se não, 
  }                                 // retorna 0 (não primo).
  return 0;    
}

int main()
{
  
  int primo, entrada;
  
  printf("Hoje vamos verificar se numeros sao primos, ou nao...\n");
  printf("Insira um numero: ");
  scanf("%d", &entrada);  

  primo=determinar_primo(entrada);  // primo = função determinada acima aplicada para a entrada fornecida pelo usuário
  
  if(primo==1)
   printf("O numero %d eh primo :) \n", entrada);   
  
  else
   printf("O numero %d nao eh primo :( \n", entrada); 
  
   
  system("PAUSE");
  return 0;   
    
}
