#include<stdlib.h>
#include<stdio.h> 

int main()
{

  int linhas1, colunas1, linhas2, colunas2, i=0, j=0, k=0;
  float matriz1[10][10], matriz2[10][10], matriz3[10][10];
    
  printf("Calculo da multiplicacao de duas matrizes. \n\n");
  
  printf("Informe as linhas da primeira matriz: ");
  scanf("%d", &linhas1);
  
  printf("Agora, as colunas: ");
  scanf("%d", &colunas1);
  
  printf("\n");
  
  for (i=0; i<linhas1; i++) { 
     for (j=0; j<colunas1; j++) {
         printf("Insira elemento m1(%dx%d): ", i+1, j+1);
         scanf("%f", &matriz1[i][j]);
     }    
  }
  
  printf("\nA sua primeira matriz eh: ");
  printf("\n");
  
  for (i=0; i<linhas1; i++) { 
     printf("|");
     for (j=0; j<colunas1; j++)
         printf("%.1f ", matriz1[i][j]);   
     printf("|\n");    
  }
  printf("\n\nAgora, informe as linhas da segunda matriz: ");
  scanf("%d", &linhas2);
  
  printf("Agora, as colunas: ");
  scanf("%d", &colunas2);
  
  printf("\n");
  
  if(colunas1 != linhas2) {
     printf("\nNao eh possivel multiplicar as duas matrizes...\n");
     printf("O nro de colunas da 1ra matriz deve ser igual ao numero de linhas da 2da matriz!\n\n");
     
     system("PAUSE");
     return 0;
  }
    
  for (i=0; i<linhas2; i++) { 
     for (j=0; j<colunas2; j++) {
         printf("Insira elemento m2(%dx%d): ", i+1, j+1);
         scanf("%f", &matriz2[i][j]);
     }    
  } 
  printf("\nA sua segunda matriz eh: ");
  printf("\n");
  
  for (i=0; i<linhas2; i++) { 
     printf("|");
     for (j=0; j<colunas2; j++)
         printf("%.1f ", matriz2[i][j]);   
     printf("|\n");    
  }
  
  for (i=0;i<linhas1; i++) {
      for (j=0; j<linhas1; j++) {
        for (k=0; k<colunas1; k++)
          matriz3[i][j] = matriz3[i][j] + (matriz1[i][k] * matriz2[k][j]); 
      }
  }
 printf("\nA matriz resultante da multiplicacao entre elas eh: \n");
  
 for (i=0; i<linhas1; i++) {
    printf("|");
    for (j=0; j<colunas2; j++){ 
       printf("%.1f ", matriz3[i][j]);
    }
    printf("|\n");
  }
  printf("\n\n"); 
  
  
  system("PAUSE");
  return 0;   
    
}
