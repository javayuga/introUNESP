#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int linhas1, colunas1, colunas2, i=0, j=0, k=0;
  float matriz[linhas1][colunas1], vetor[1][j], matriz3[10][10];
  
  printf("Programa para calcular a multiplicacao de uma matriz por um vetor...\n\n");
  
  printf("Informe o numero de colunas do seu vetor: ");
  scanf("%d", &colunas2);
  
  printf("\n");
  
  for (j=0; j<colunas2; j++) {
     printf("Insira elemento v(1x%d): ", j+1);
     scanf("%f", &vetor[1][j]);
  }    
   
  printf("\nO seu vetor eh: ");
  printf("\n");
  
  for (i=0; i<1; i++) { 
     printf("|");
     for (j=0; j<colunas2; j++)
         printf("%.2f ", vetor[1][j]);   
     printf("|\n");    
  }

  printf("\n\nAgora, informe as linhas da sua matriz: ");
  scanf("%d", &linhas1);
  
  printf("E as colunas: ");
  scanf("%d", &colunas1);
  
  printf("\n");
  
  if(colunas1 != 1) {
     printf("\nNao eh possivel fazer a multiplicacao...\n");
     printf("O nro de colunas da matriz deve ser igual ao numero de linhas do vetor!\n\n");
     
     system("PAUSE");
     return 0;
  }
  
  for (i=0; i<linhas1; i++) { 
     for (j=0; j<colunas1; j++) {
         printf("Insira elemento m(%dx%d): ", i+1, j+1);
         scanf("%f", &matriz[i][j]);
     }    
  } 
  printf("\nA sua matriz eh: ");
  printf("\n");
  
  for (i=0; i<linhas1; i++) { 
     printf("|");
     for (j=0; j<colunas1; j++)
         printf("%.2f ", matriz[i][j]);   
     printf("|\n");    
  }
  
 for (i=0;i<linhas1; i++) {
      for (j=0; j<linhas1; j++) {
        for (k=0; k<colunas1; k++)
          matriz3[i][j] = matriz3[i][j] + (matriz[i][k] * vetor[k][j]); 
      }
 }
 printf("\nA matriz resultante da multiplicacao entre eles eh: \n");
  
 for (i=0; i<1; i++) {
    printf("|");
    for (j=0; j<colunas2; j++){ 
       printf("%.1f ", matriz3[1][j]);
    }
    printf("|\n");
  }
  printf("\n\n"); 
  
  system("PAUSE");
  return 0;   
    
}

