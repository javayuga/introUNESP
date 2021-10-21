/* Faça um programa que leia uma matriz e um escalar. Faça
a multiplicação entre os dois e imprima a matriz resultante.
*/

#include<stdlib.h>
#include<stdio.h> 


int main()
{
  int linhas, colunas, i=0, j=0, escalar=0;
  
  
  printf("Informe as linhas da sua matriz: ");
  scanf("%d", &linhas);
  
  printf("Agora, as colunas: ");
  scanf("%d", &colunas);
  
  printf("\n");
  
  float matriz[linhas][colunas];
  
  for (i=0; i<linhas; i++) { 
     for (j=0; j<colunas; j++) {
         printf("Insira elemento m(%dx%d): ", i+1, j+1);
         scanf("%f", &matriz[i][j]);
     }    
  }
  
  printf("\nA sua matriz eh: ");
  printf("\n");
  
  for (i=0; i<linhas; i++) { 
     printf("|");
     for (j=0; j<colunas; j++)
         printf("%.2f ", matriz[i][j]);   
     printf("|\n");    
  }
  
  printf("\n\nAgora, deseja multiplicar essa matriz por? ");
  scanf("%d", &escalar);
  
  printf("\nA sua nova matriz eh: ");
  printf("\n");
  
  for (i=0; i<linhas; i++) { 
     printf("|");
     for (j=0; j<colunas; j++){
         printf("%.2f ", matriz[i][j]*escalar);  
     }
     printf("|\n");    
  }
  
  printf("\n\n");
  
 
  system("PAUSE");
  return 0;   
    
}
