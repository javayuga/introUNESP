#include<stdlib.h>
#include<stdio.h> 

int calcular_soma_naturais(int n)
{
  if (n==0){
    return 0;                             // recursiva!!
  }
  return n+calcular_soma_naturais(n-1);
}

int main()
{
    
 int numero, soma;
 soma = 0; 
 
 printf("Digite um numero: ");
 scanf("%d", &numero);
 
 soma = calcular_soma_naturais(numero);
 
 printf("A soma dos numeros eh: %d.\n", soma);


  system("PAUSE");
  return 0;   
    
}
