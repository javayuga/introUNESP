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
  int i, numero, soma;
  soma=0;  
 
  printf("Digite um numero inteiro, real e positivo: ");
  scanf("%d", &numero);
  
  printf("%d", numero);
    
  for (i=1;i<=numero;i++) {
     if((i%2 !=0) && (determinar_primo(numero) ))
        soma+=numero;
  }
     
  system("PAUSE");
  return 0;   
    
}


