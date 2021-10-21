#include<stdlib.h>
#include<stdio.h> 


int main()
{
  int linhas, colunas, i=0, j=0;
  
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
     
  printf("\nJa a sua transposta eh: ");
  printf("\n");
  
  for (i=0; i<linhas; i++) { 
     printf("|");
     for (j=0; j<colunas; j++)
         printf("%.2f ", matriz[j][i]);   
     printf("|\n"); 
  }
  printf("\n\n");
  
  system("PAUSE");
  return 0;   
    
}
