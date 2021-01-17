#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int n, i=0;
  int vetor[n];
  
  printf("Triangulo de Pascal.\n");
  printf("Informe a quantidade de linhas: ");
  scanf("%d", &n);

  if (n>20){
     printf("\nInforme um valor menor que 20...\n\n");
     
     system("PAUSE");
     return 0;
  }
	
  vetor[i] = (vetor[i-1] + vetor[i-1]);
  printf("| ");
  for (i=0; i<=n; i++){
     printf("%d ", vetor[i]);
	}
	 printf("|");
  
  printf("\n");

  system("PAUSE");
  return 0;   
    
}
