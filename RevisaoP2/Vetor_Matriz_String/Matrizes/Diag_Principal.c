/* Indique quais são os índices que compõem a diagonal
principal de uma matriz x de ordem 5 por 5.
*/

#include<stdlib.h>
#include<stdio.h> 


int main()
{
  int linha, coluna, i, j;
  
  printf("Informe as linhas e colunas da sua matriz ");
  scanf("%d%d", &linha, &coluna);
  
  float matriz[linha][coluna];
  
  for (i=0; i<linha; i++) { // fase de leitura... (fixa linhas e varia colunas)
    for (j=0; j<coluna; j++) {
      printf("Insira elemento m(%dx%d): ", i+1, j+1);
      scanf("%f", &matriz[i][j]);
    }    
  }
  for (i=0; i<linha; i++) { // fase de impressão 
    printf("|");
    for (j=0; j<coluna; j++)
        printf("%.2f ", matriz[i][j]);   
    printf("|\n");    
  }   
   
  system("PAUSE");
  return 0;   
    
}

