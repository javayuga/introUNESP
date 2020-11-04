#include<stdio.h>
#include<stdlib.h>

int main()
{
  int numero;
  
  printf("Insira um numero ");
  scanf("%d", &numero);
  
  if (numero > 0){
    printf("O numero %d eh positivo\n", numero);
  }
  else {
    printf("O numero %d eh negativo\n", numero);
  }
  
  system("PAUSE"); 
  return 0;   
    
}
