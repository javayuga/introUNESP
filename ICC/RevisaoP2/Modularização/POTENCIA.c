#include<stdlib.h>
#include<stdio.h> 


int calcular_potencia(int i, int j)  
{
  if (j==0) {                               // fun��o recursiva (chama ela mesma)
    return 1;                               // se j igual a zero, retorna 1
  }                                         // esse 1 entra no pr�ximo return, j� que � p 1ro numero dif de 0
  return i*calcular_potencia(i, j-1);
}

int main()
{
    
 int i, j, potencia;
 
 printf("Digite um numero para i: ");
 scanf("%d", &i);
 
 printf("Digite um numero para j: ");
 scanf("%d", &j);
 
 
 potencia=calcular_potencia(i,j);               // revisar (escrever um textinho mais adequado!)
 
 printf("A potencia eh %d.\n", potencia);


  system("PAUSE");
  return 0; 
}
