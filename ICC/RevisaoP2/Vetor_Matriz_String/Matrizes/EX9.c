#include<stdlib.h>
#include<stdio.h> 

int main()
{
  float m1[10][10], m2[10][10], m3[10][10];
  int i=0, j=0, k=0, linhas1, colunas1, linhas2, colunas2;
  
  printf("Calculo da multiplicacao de duas matrizes. \n\n");
  
  for (i=0; i<linhas1; i++) {
    for (j=0; j<colunas1; j++) {
       printf("Insira elemento da primeira matriz m(%dx%d): ", i+1, j+1);
       scanf("%f", &m1[i][j]);
    }    
  }
  printf("\nA primeira matriz eh: \n");
    
  for (i=0; i<linhas1; i++) { 
    printf("|");
    for (j=0; j<colunas1; j++)
        printf("%.2f ", m1[i][j]);   
    printf("|\n");    
  }

  printf("\n\n");
  
  for (i=0; i<linhas2; i++) {
    for (j=0; j<linhas2; j++) {
       printf("Insira elemento da segunda matriz m(%dx%d): ", i+1, j+1);
       scanf("%f", &m2[i][j]);
    }    
  }
  printf("\nA segunda matriz eh: \n");
  
  for (i=0; i<linhas2; i++) { 
     printf("|");
     for (j=0; j<colunas2; j++)
         printf("%.2f ", m2[i][j]);   
     printf("|\n");
  }
  
  printf("\nA matriz resultante da multiplicacao entre elas eh: \n");
  
  for (i=0; i<linhas1; i++) { 
     printf("|");
     for (j=0; j<linhas1; j++)
        for(k=0;k<colunas1;k++)
           printf("%.2f ", m3[i][j]= m3[i][j] + (m1[i][k]*m2[k][j]) );   
     printf("|\n");
  }
  printf("\n\n");
      
  system("PAUSE");
  return 0;   
    
}

// conferir!!!!!
