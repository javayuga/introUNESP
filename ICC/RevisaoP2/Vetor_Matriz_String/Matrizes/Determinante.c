/* Faça um programa que calcule e imprima o determinante
de uma matriz 3x3.
*/
#include<stdlib.h>
#include<stdio.h> 

int main()
{
  
  int  i=0, j=0, diag_esquerda, diag_direita, determinante;
  int matriz[2][2];
  
  printf("Vamos calcular o determinante de uma matriz 2x2.");
  printf("\n\n");
  
  for (i=0; i<2; i++) { 
     for (j=0; j<2; j++) {
         printf("Insira elemento inteiro m(%dx%d): ", i+1, j+1);
         scanf("%d", &matriz[i][j]);
     }    
  }
  
  printf("\nA sua matriz eh: ");
  printf("\n");
  
  for (i=0; i<2; i++) { 
     printf("|");
     for (j=0; j<2; j++)
         printf("%d ", matriz[i][j]);   
     printf("|\n");    
  }
  
  diag_esquerda = matriz[0][0] * matriz[1][1];
  diag_direita = matriz[0][1] * matriz[1][0];
  
  determinante = (diag_esquerda) - (diag_direita);
  
  printf("O determinante da sua matriz eh %d.\n\n", determinante);
  system("PAUSE");
  return 0;   
    
}
