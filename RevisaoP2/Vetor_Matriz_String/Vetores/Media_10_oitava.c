/* Faça um programa que, dados n (maior igual a 1 e menor
igual a 100) inteiros menores que 10^8, imprima a média dos
elementos e todos os numeros maiores que a media.

A entrada é composta por um numero n (quantidade de elementos)
seguida de n inteiros. Já a saída é composta de duas linhas,
uma contendo a média dos elementos e a outra contendo todos os 
valores maiores que a média.
*/

#include<stdlib.h>
#include<stdio.h>


int main()
{
  int numeros[100000000];
  int i=0, n=0, somatorio=0;
  float media=0;
  
  printf("Digite a quantidade de elementos num intervalo de 1 a 100: ");
  scanf("%d", &n); 
  
  for(i=0; i<n; i++) {
     scanf("%d");
     somatorio += numeros[i];   
  }
  
  media= (somatorio/n);
  
  printf("A media do somatorio dos valores ate %d eh %.2f.\n", n, media);
  
  for(i=0; i<n; i++){
     if(numeros[i]>media) {
        printf("Os valores maiores que a media sao: %d ", numeros[i]);
     }
     
  } 
    
  system("PAUSE");
  return 0;
}
