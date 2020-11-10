#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int numero;
  
  printf("Informe o numero inteiro desejado: ");
  scanf("%d", &numero);
  
  if (numero%2==0)
    printf("O numero %d eh par.\n", numero);  
  else
    printf("O numero %d eh impar.\n", numero); 
 
  system("PAUSE");
  return 0;   
    
}
