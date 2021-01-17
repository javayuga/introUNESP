#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int n, i=0, j=0;
  int matriz[n][n];
  
  printf("Triangulo de Pascal na forma de matriz triangular.\n");
  printf("Informe a quantidade de linhas: ");
  scanf("%d", &n);

  if (n>20){
     printf("\nInforme um valor menor que 20...\n\n");
     
     system("PAUSE");
     return 0;
  }
  
  for (i=0; i<=n; i++){
	   for (j=0; j<=n; j++){
		    if (j==i || j==0)
	         matriz[i][j] = 1;
		    else if(i<j)
    		   matriz[i][j] = 0;
		    else
		       matriz[i][j] = (matriz[i-1][j-1] + matriz[i-1][j]);
      }
  }	

  for (i=0; i<=n; i++){
     printf("| ");
	   for (j=0; j<=n; j++)
        printf("%d ", matriz[i][j]);
     printf("|\n");
	}
  
  printf("\n");

  system("PAUSE");
  return 0;   
    
}
