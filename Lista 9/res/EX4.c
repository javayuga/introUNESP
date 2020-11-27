#include<stdlib.h>
#include<stdio.h> 

void swap(int *a, int *b, int j) 
{ 
int temp = a[j]; 
a[j] = a[j+1]; 
a[j+1] = temp;

temp = b[j]; 
b[j] = b[j+1]; 
b[j+1] = temp;
}  


// https://www.edureka.co/blog/sorting-algorithms-in-c/
void ordernar_bubble(int* vetor[2], int n){
	int i, j; 
	for (i = 0; i < n-1; i++)       
		for (j = 0; j < n-i-1; j++)
		 	if (vetor[0][j] > vetor[0][j+1]) 
				swap(vetor[0], vetor[1], j); 
}

void imprime_vetor(int* vetor[2], int n, int index){
	int i;

	printf("[");	
	for(i=0;i<n;i++){
		printf("%i", vetor[index][i]);
		if (i<n-1)
			printf(", ");
	}
	printf("]\n");
	
}


int main()
{
	int i, n;
	int* vetor[2];

	printf("\nDigite o tamanho do vetor a ser ordenado: ");
	scanf("%d",&n);
	
	vetor[0] = malloc( n * sizeof(int));
	vetor[1] = malloc( n * sizeof(int));
	
	printf("\n");

	for(i=0;i<n;i++){
		printf("Digite o valor no indice %i : ", i);
		scanf("%d",&vetor[0][i]);
		vetor[1][i]=i;
		printf("\n");
	}
	
	printf("\nO vetor original eh:\n");
	imprime_vetor(vetor, n, 0);

	ordernar_bubble(vetor, n);

	printf("\nO vetor ordenado eh:\n");
	imprime_vetor(vetor, n, 0);

	printf("\nOs indices ordernados sao :\n");
	imprime_vetor(vetor, n, 1);
	
	free(vetor[0]);
	free(vetor[1));

  return 0;   
    
}
