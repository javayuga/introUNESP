/* Escreva um programa que leia dois vetores de 10 posições
e faça a soma dos elementos de mesmo índice, colocando o 
resultado em um terceiro vetor. Mostre o vetor resultante.
*/

#include<stdlib.h>
#include<stdio.h>

int main()
{
  int vetor_1[10];
  int vetor_2[10];
  int vetor_resultado[10];
  
  int i=0;
  
  for(i=0; i<10; i++)
    scanf("%d", &vetor_1[i]);
  for (i=0; i<10; i++)
    scanf("%d", &vetor_2[i]);
  for (i=0; i<10; i++)
    vetor_resultado[i] = vetor_1[i] + vetor_2[i];
  for (i=0; i<10; i++)
    printf("%d ", vetor_resultado[i]);  
   
    
  system("PAUSE");
  return 0;   
    
}
