#include<stdlib.h>
#include<stdio.h> 

const float NULO = -999;  // indica que um valor ainda não foi inicializado
const float SUP = 1;  		// indica o limite superior dos valores
const float INF = -1;  		// indica o limite inferior dos valores
const int MIN = 1;        // indica o número mínimo de itens no vetor
const int MAX = 100;      // indica o número máximo de itens no vetor


void swap(float *a, float *b, int j) 
{ 
float temp = a[j]; 
a[j] = a[j+1]; 
a[j+1] = temp;

temp = b[j]; 
b[j] = b[j+1]; 
b[j+1] = temp;
}  


// https://www.edureka.co/blog/sorting-algorithms-in-c/
void ordernar_freq_bubble(float* vetor[2], int n){
	int i, j; 
	for (i = 0; i < n-1; i++)       
		for (j = 0; j < n-i-1; j++)
		 	if ((vetor[1][j] < vetor[1][j+1])&&( vetor[1][j+1]!=NULO))
				swap(vetor[0], vetor[1], j); 
}

preencher_freq(float* vetor, int n, float* freq[2]){
	int i, j;

	for (i = 0; i < n ; i++){
		freq[0][i]=NULO;  // guarda valor
		freq[1][i]=NULO;  // guarda frequencia
  }
	
	for (i = 0; i < n ; i++){
		for (j = 0; j < n; j++){
			if (freq[0][j]==NULO){
				// não foi encontrado antes
				freq[0][j]=vetor[i];
				freq[1][j]=1;
				break;
				
			}else if (freq[0][j]==vetor[i]){
				// já foi encontrado
				freq[1][j]++;
				break;

			}
		}
		
	}
}



void imprime_vetor(float* vetor, int n){
	int i;

	printf("[");	
	for(i=0;i<n;i++){
		printf("%f", vetor[i]);
		if (i<n-1)
			printf(", ");
	}
	printf("]\n");
	
}

void imprime_freq(float* freq[2], int n){
	int i;

	printf("\nO vetor [(valor,frequencia), ... ] (ordenado por maior frequencia) :\n");	

	printf("[");	
	for(i=0;i<n;i++){
		if (freq[0][i]==NULO){
			// slot não utilizado
			break;
		}
		
		printf("(%f,%.0f)", freq[0][i], freq[1][i]);
		if (i<n-1)
			if (freq[0][i+1]!=NULO)
				printf(", ");
	}
	printf("]\n");
	
}

void entrar_tamanho(int* n, int min, int max){
	do{
		printf("\nDigite o tamanho do vetor a ser analisado [%d - %d]: ", min, max);
		scanf("%d",n);
		
		if (*n<min){
			printf("o tamanho do vetor tem que ser maior do que %d...\n", min);
	
		}else if (*n>max){
			printf("O tamanho do vetor tem que ser menor ou igual a %d...\n", max);
			printf("Precisa de mais que %d valores?\n", max);
			printf("O teclado nao e a melhor alternativa, considere usar um arquivo... \n");
		
		}
	}while((*n<1)||(*n>max));
	
}

void entrar_vetor(float* vetor, int n, float inf, float sup){
	int i; 
	
	printf("\nEntrar %d valores dentro da faixa [%.4f - %.4f] \n", n, inf, sup);

	for(i=0;i<n;i++){
		do{
			printf("\nDigite o valor no indice %i [%.4f - %.4f]: ", i, inf, sup);
			scanf("%f",&vetor[i]);  // guarda valor
			
			if ((vetor[i]<INF)||(vetor[i]>SUP))
				printf("\nO valor %.4f esta fora da faixa [%.4f - %.4f]\nConsidere a possibilidade de normalizar seus valores. \n", vetor[i], inf, sup);
		}while ((vetor[i]<inf)||(vetor[i]>sup));

	}
	
}


int main()
{
	int n;
	float* vetor;
	float* freq[2];
	
	entrar_tamanho(&n, MIN, MAX);
	
	vetor = malloc( n * sizeof(int));
	freq[0] = malloc( n * sizeof(int));
	freq[1] = malloc( n * sizeof(int));
	
	entrar_vetor(vetor, n, INF, SUP);
	
	printf("\nO vetor original eh:\n");
	imprime_vetor(vetor, n);
	
	preencher_freq(vetor, n, freq);

	ordernar_freq_bubble(freq, n);

	imprime_freq(freq, n);

	free (vetor);
	free (freq[0]);
	free (freq[1]);

  return 0;   
    
}
