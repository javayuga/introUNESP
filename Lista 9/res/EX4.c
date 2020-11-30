#include<stdlib.h>
#include<stdio.h> 

const float NULO = -999;  // indica que um valor ainda não foi inicializado
const float SUP = 1;  		// indica o limite superior dos valores
const float INF = -1;  		// indica o limite inferior dos valores
const int MIN = 1;        // indica o número mínimo de itens no vetor
const int MAX = 100;      // indica o número máximo de itens no vetor

// struct para guardar um valor e sua frequência relativa

struct Frequencia{
	float valor;
	int frequencia;
};

// imprime um vetor de floats

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

// imprime um vetor de frequências

void imprime_freq(struct Frequencia* freq, int n){
	int i;

	printf("\nO vetor [(valor,frequencia), ... ] (ordenado por maior frequencia) :\n");	

	printf("[");	
	for(i=0;i<n;i++){
		if (freq[i].valor==NULO){
			// slot não utilizado
			break;
		}
		
		printf("(%f,%d)", freq[i].valor, freq[i].frequencia);
		if (i<n-1)
			if (freq[i+1].valor!=NULO)
				printf(", ");
	}
	printf("]\n");
	
}


// ordernação do vetor de frequência usando algoritmo de bubble sort
// https://www.edureka.co/blog/sorting-algorithms-in-c/

void ordernar_freq_bubble(struct Frequencia* freq, int n){
	int i, j; 
	struct Frequencia temp;

	for (i = 0; i < n-1; i++)       
		for (j = 0; j < n-i-1; j++)
		 	if ( (freq[j].frequencia < freq[j+1].frequencia) && ( freq[j+1].frequencia!=NULO)){
		 		temp = freq[j];
				freq[j]=freq[j+1];
				freq[j+1]=temp; 	
			}
}

// analisa um vetor de entrada e popula um vetor de frequencias

analisa_vetor_frequencia(float* vetor, int n, struct Frequencia* freq){
	int i, j;

	for (i = 0; i < n ; i++){
		freq[i].valor=NULO;  // guarda valor
		freq[i].frequencia=NULO;  // guarda frequencia
  }
	
	for (i = 0; i < n ; i++){
		for (j = 0; j < n; j++){
			if (freq[j].valor==NULO){
				// não foi encontrado antes
				freq[j].valor=vetor[i];
				freq[j].frequencia=1;
				break;
				
			}else if (freq[j].valor==vetor[i]){
				// já foi encontrado
				freq[j].frequencia++;
				break;

			}
		}
		
	}
}

// entra o tamanho de um vetor, limitado por [min - max]

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

// entra os valores floats de um vetor, cada valor limitado por [inf - sup]

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
	struct Frequencia* freq;
	
	entrar_tamanho(&n, MIN, MAX);
	
	vetor = malloc( n * sizeof(int));
	
	entrar_vetor(vetor, n, INF, SUP);
	
	printf("\nO vetor original eh:\n");
	imprime_vetor(vetor, n);
	
	freq = malloc( n * sizeof(struct Frequencia));
	analisa_vetor_frequencia(vetor, n, freq);

	ordernar_freq_bubble(freq, n);

	imprime_freq(freq, n);

	free (vetor);
	free (freq);

  return 0;   
    
}
