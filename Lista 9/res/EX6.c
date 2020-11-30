#include<stdlib.h>
#include<stdio.h> 
#include<stdbool.h> 

const float NULO = -999;  // indica que um valor ainda não foi inicializado
const int MIN = 1;        // indica o número mínimo de itens no vetor
const int MAX = 100;      // indica o número máximo de itens no vetor

const int INF = 0;
const int SUP = INT_MAX;


// imprime um vetor de ints, interrompe caso valor NULO encontrado

void imprime_vetor(int* vetor, int n){
	int i;

	printf("[");	
	for(i=0;i<n;i++){
		if (vetor[i]==NULO)
			break;

		printf("%d", vetor[i]);
		if ((i<n-1)&&(vetor[i+1]!=NULO))
			printf(", ");
	}
	printf("]\n");
	
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

// entra os valoros inteiros de um vetor, cada valor limitado por [inf - sup]

void entrar_vetor(int* vetor, int n, int inf, int sup){
	int i; 
	
	printf("\nEntrar %d valores dentro da faixa [%d - %d] \n", n, inf, sup);

	for(i=0;i<n;i++){
		do{
			printf("\nDigite o valor no indice %i : ", i, inf, sup);
			scanf("%d",&vetor[i]);  // guarda valor
			
			if ((vetor[i]<INF)||(vetor[i]>SUP))
				printf("\nO valor %d esta fora da faixa [%d - %d]\n", vetor[i], inf, sup);
		}while ((vetor[i]<inf)||(vetor[i]>sup));

	}
	
}

// ordena um vetor de inteiros, usando bubble sort
// https://www.edureka.co/blog/sorting-algorithms-in-c/


void orderna_bubble(int* vetor, int n){
	int i, j; 
	int temp;

	for (i = 0; i < n-1; i++)       
		for (j = 0; j < n-i-1; j++)
		 	if ( (vetor[j] > vetor[j+1]) && (vetor[j]!=NULO) && (vetor[j+1]!=NULO)){
		 		temp = vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=temp; 	
			}
}


// inicializa vetor de ocorrências com valores NULO

int* inicializa_ocorrencias(int n){
	int i;

	int* ocorrencias = malloc( n * sizeof(int));
	
	for(i=0;i<n;i++){
		ocorrencias[i]=NULO;
	}
	
	return ocorrencias;
}
	

// checa existência de valor no vetor de ocorrencias, retorna true se existir

bool checa_existencia(int valor, int* ocorrencias, int n){
	int i;
	
	bool existe = false;
	
	for(i=0;i<n;i++){
		if (ocorrencias[i]==NULO){
			break;
		}
		if (valor==ocorrencias[i]){
			existe = true;
			break;
		}
	}
	
	return existe;
}

// guarda valores de dois vetores num vetor de ocorrências

void guarda_ocorrencias(int* vetor_m, int m, int* ocorrencias, int n){
	int proximo, i;
	
	proximo=0;
	
	for(i=0; i<m; i++){
		if (!checa_existencia(vetor_m[i], ocorrencias, n)){
			ocorrencias[proximo]=vetor_m[i];
			proximo++;
		}
	}
	
}



int main()
{
	int i, m, n;
	int* vetor_m;
	int* vetor_n;
	int* ocorrencias;

	// popular vetor M
		
	printf("vetor M");
	entrar_tamanho(&m, MIN, MAX);

	vetor_m = malloc( m * sizeof(int));
	
	printf("\nvetor M");
	entrar_vetor(vetor_m, m, INF, SUP);


	// popular vetor N
		
	printf("\nvetor N");
	entrar_tamanho(&n, MIN, MAX);

	vetor_n = malloc( n * sizeof(int));

	printf("\nvetor N");
	entrar_vetor(vetor_n, n, INF, SUP);


	// imprime os vetores para conferencia
	printf("\nvetor M");
	imprime_vetor(vetor_m, m);

	printf("\nvetor N");
	imprime_vetor(vetor_n, n);


	// imprime lista de valores distintos ordenados
	printf("\nvalores distintos ordenados: ");
	
	ocorrencias = inicializa_ocorrencias(m+n);
	
	guarda_ocorrencias(vetor_m, m, ocorrencias, m+n);
	guarda_ocorrencias(vetor_n, n, ocorrencias, m+n);
	
	//orderna_bubble(ocorrencias, m+n);
	
	imprime_vetor(ocorrencias, m+n);

	free(vetor_m);
	free(vetor_n);
	free(ocorrencias);

  return 0;   
    
}
