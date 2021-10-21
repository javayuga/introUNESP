#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int i=0, j=0, linhas, colunas;
  int matriz[i][j]; 
  int k, n, custo=0 ;  
    
  printf("Informe as linhas da matriz: ");
  scanf("%d", &linhas);
  
  printf("Agora, as colunas: ");
  scanf("%d", &colunas);
  
  if (linhas!=colunas) {
    printf("\nA matriz deve ser quadrada.\n\n");
    
    system("PAUSE");
    return 0;
  }
  printf("\n");
  
  for (i=0; i<linhas; i++) { 
     for (j=0; j<colunas; j++) {
         printf("Insira elemento m(%dx%d): ", i+1, j+1);
         scanf("%d", &matriz[i][j]);
     }    
  }
  printf("\nA sua matriz eh: ");
  printf("\n");
  
  for (i=0; i<linhas; i++) { 
     printf("|");
     for (j=0; j<colunas; j++)
         printf("%d ", matriz[i][j]);   
     printf("|\n");    
  }

  printf("Informe o numero de cidades do itinerario: ");
  scanf("%d", &k);
  
  printf("Agora, informe o numero de itinerarios: ");
  scanf("%d", &n);
 
  int itinerario[k][k+1];
  
  custo += itinerario[k][k+1];
  
  printf("O custo da viagem eh %d.\n\n", custo);
 
  system("PAUSE");
  return 0;   
    
}
