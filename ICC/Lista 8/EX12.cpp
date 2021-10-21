#include<stdlib.h>
#include<stdio.h> 


int calcular_potencia(int i, int j)
{
  if (j==0) {
    return 1;   
  }
  return i*calcular_potencia(i, j-1);
}

int main()
{
    
 int i, j, potencia;
 
 printf("Digite um numero para i: ");
 scanf("%d", &i);
 
 printf("Digite um numero para j: ");
 scanf("%d", &j);
 
 
 potencia=calcular_potencia(i,j);
 
 printf("A potencia eh %d.\n", potencia);


  system("PAUSE");
  return 0; 
