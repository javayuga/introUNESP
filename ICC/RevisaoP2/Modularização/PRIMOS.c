#include<stdlib.h>
#include<stdio.h> 

int determinar_primo(int num)
{
  int  i, resultado;

  resultado = 0;
  
  for (i=1; i<=num; i++) {          //   Aqui verificamos se o resto da divis�o 
    if ((num%i)==0)                 // de um numero por i � zero. Se for, adi-
      resultado++;                  // ciona 1 para garantir que o prox. � �mpar
  }
  if(resultado == 2){               //  Se esse resultado (o qual adc. 1) for 
   return 1;                        // igual a 2, retorna 1 (primo). Se n�o, 
  }                                 // retorna 0 (n�o primo).
  return 0;    
}

int main()
{
  
  int primo, entrada;
  
  printf("Hoje vamos verificar se numeros sao primos, ou nao...\n");
  printf("Insira um numero: ");
  scanf("%d", &entrada);  

  primo=determinar_primo(entrada);  // primo = fun��o determinada acima aplicada para a entrada fornecida pelo usu�rio
  
  if(primo==1)
   printf("O numero %d eh primo :) \n", entrada);   
  
  else
   printf("O numero %d nao eh primo :( \n", entrada); 
  
   
  system("PAUSE");
  return 0;   
    
}
