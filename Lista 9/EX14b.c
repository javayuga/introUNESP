#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int linhas, colunas;
  int i=0, j=0;
  float m[linhas][colunas], m2[10][10];   
    
  printf("Informe as linhas da sua matriz: ");
  scanf("%d", &linhas);
  printf("Agora, as colunas: ");
  scanf("%d", &colunas);
  printf("\n");
  
  for (i=0; i<linhas; i++) { 
     for (j=0; j<colunas; j++) {
         printf("Insira elemento m(%dx%d): ", i+1, j+1);
         scanf("%f", &m[i][j]);
     }
  }
  printf("\n");
  
  printf("\nA sua matriz eh: \n");
  for (i=0; i<linhas; i++) { 
     printf("|");
     for (j=0; j<colunas; j++)
         printf("%.1f ", m[i][j]);   
     printf("|\n");    
  }
  
  printf("\nJa a sua transposta eh: \n");
  for (i=0; i<linhas; i++) { 
     printf("|");
     for (j=0; j<colunas; j++)
         printf("%.1f ", m[j][i]);   
     printf("|\n"); 
  }
  printf("\n\n");
  
  m2[i][j] = m[i][j] + (m[i][j] * m[j][i]);
  
  printf("\nA matriz resultante da multiplicacao entre elas eh: \n");
  
  for (i=0; i<linhas; i++) {
    printf("|");
    for (j=0; j<colunas; j++){ 
       printf("%.1f ", m2[i][j]);
    }
    printf("|\n");
  }
  printf("\n\n"); 
  
  
  system("PAUSE");
  return 0;   
    
}
