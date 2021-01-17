#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int linhas, colunas, i=0, j=0, identidade=1;
  float m[linhas][colunas];  
    
  printf("Informe as linhas da sua matriz: ");
  scanf("%d", &linhas);
  printf("Agora, as colunas: ");
  scanf("%d", &colunas);
  printf("\n");
  
  if (linhas != colunas){
     printf("Para ser identidade, a matriz deve ser quadrada...\n\n");
     system("PAUSE");
     return 0;   
  }
  
  for (i=0; i<linhas; i++) { 
     for (j=0; j<colunas; j++) {
         printf("Insira elemento m(%dx%d): ", i+1, j+1);
         scanf("%f", &m[i][j]);
     }    
     if((i==j) && (m[i][j]!=1) )
        identidade=0;
     else if ((i!=j) && (m[i][j]!=0) )
        identidade=0;
  }
  printf("\nA sua matriz eh: ");
  printf("\n");
  
  for (i=0; i<linhas; i++) { 
     printf("|");
     for (j=0; j<colunas; j++)
         printf("%.2f ", m[i][j]);   
     printf("|\n");    
  } 
  if (identidade==1)
     printf("E ela eh identidade...\n\n");
  else
     printf("E ela nao eh identidade...\n\n");
   
 
  system("PAUSE");
  return 0;   
    
}
