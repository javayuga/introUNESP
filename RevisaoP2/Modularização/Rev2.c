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
 
  printf("Digite um numero inteiro, real e positivo: ");
  scanf("%d", &numero); 
  
  if (numero==1)
    soma=1;
  else if (numero==2)
    soma=3;
  else if (numero==0) {
     printf("Esse invervalo nao eh valido. Tente novamente.\n\n");
     
     system("PAUSE");
     return 0;
  }
  else {   
    soma=3;
    printf("Os numeros primos sao: 1, 2, ");
    for (i=3;i<=numero;i=i+2) {
       if(determinar_primo(i)) {
          printf("%d, ", i);                     
          soma+=i; 
       }
    }  
  }  
  printf("a soma dos primos ate %d eh %d.\n", numero, soma);
  
  system("PAUSE");
  return 0;   
    
}
