#include<stdlib.h>
#include<stdio.h> 

const float NULO = -999;  // indica que um valor ainda não foi inicializado
const int MIN = 1;        // indica o número mínimo de itens no vetor
const int MAX = 100;      // indica o número máximo de itens no vetor

const int INF = INT_MIN;
const int SUP = INT_MAX;


struct Intervalo{
	int comeca_em;
	int tamanho;
};

// imprime um vetor de ints

void imprime_vetor(int* vetor, int n){
	int i;

	printf("[");	
	for(i=0;i<n;i++){
		printf("%d", vetor[i]);
		if (i<n-1)
			printf(", ");
	}
	printf("]\n");
	
}

// imprime um intervalo de um vetor de inteiros

void imprime_vetor_intervalo(int* vetor, struct Intervalo intervalo){
	int i;

	printf("[");	
	for(i=intervalo.comeca_em;i<(intervalo.comeca_em + intervalo.tamanho);i++){
		printf("%d", vetor[i]);
		if (i<(intervalo.comeca_em+intervalo.tamanho-1))
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

// recebe dois vetores
// o menor deve vir primeiro, mas ambos podem ter o mesmo tamanho
// retorna o uma struct com o intervalo e o tamanho da maior sequência em comum

struct Intervalo encontra_seq_comum(int* vetor_menor, int n_menor, int* vetor_maior, int n_maior){
	struct Intervalo i_maior, i_atual;
	
	int i_base,i,j;
	
	i_maior.comeca_em=0;
	i_maior.tamanho=0;

	i_atual.comeca_em=0;
	i_atual.tamanho=0;

	i_base=0;
	while((i_base<n_menor)&&(i_maior.tamanho<n_menor)){
		i=i_base;
		j=0;

		i_atual.comeca_em=i_base;

		while((i<n_menor)&&(j<n_maior)){

			if (vetor_menor[i]==vetor_maior[j]){
				i_atual.tamanho++;
				i++;
				j++;
				
			}else{
				i_atual.tamanho=0;

				if (i!=i_base){
					i=i_base;
				}else{
					j++;
				}
			}
			
			if (i_maior.tamanho<i_atual.tamanho){
				i_maior.comeca_em = i_atual.comeca_em;
				i_maior.tamanho = i_atual.tamanho;
			}
		}
		
		i_base++;
	}
	
	return i_maior;
		
}



int main()
{
	int i, m, n;
	int* vetor_m;
	int* vetor_n;

	struct Intervalo indices_seq;

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

	// encontra maior sequencia em comum
	printf("\nmaior sequencia em comum: ");

	if (m>n){
		indices_seq = encontra_seq_comum(vetor_n, n, vetor_m, m);
		imprime_vetor_intervalo(vetor_n, indices_seq);
		
	}else{
		indices_seq = encontra_seq_comum(vetor_m, m, vetor_n, n);
		imprime_vetor_intervalo(vetor_m, indices_seq);
		
	}
	

	free(vetor_m);
	free(vetor_n);

  return 0;   
    
}
