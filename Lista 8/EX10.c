#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h> 

bool determinar_primo(int num){
  int  i, resultado;
  resultado = 0;
  for (i=1; i<=num; i++) {
    if ((num%i)==0)
      resultado++;
  }
  return resultado == 2;
}

int* monta_array_primos(int sup, int est){   // sup= superior est=estimativa de primos no intervalo
	int i, pos;

	int* primos = malloc(est*sizeof(int));

	primos[0]=2;
	pos=0;
	for (i=3;i<sup;i=i+2){
		if (determinar_primo(i)){
			pos++;
			if (pos>est){
				printf("sua estimativa de %d primos entre 1 e %d está insuficiente, por favor ajuste...", est, sup);
				exit(-1);
			} 
			primos[pos]=i;
		}
			
	}
	
	return primos;	
	
}

/**
Ao contrário do que diz o enunciado do exercício, a forma correta do enunciado da conjectura de Goldbach é:

todo inteiro PAR positivo maior do que 2 pode ser expresso pela soma de dois primos

https://en.wikipedia.org/wiki/Goldbach%27s_conjecture#:~:text=Goldbach's%20conjecture%20is%20one%20of,the%20sum%20of%20two%20primes. 

**/

int main()
{
	// o número total de primos entres 1 e 1000 é de 168
	// se não soubessemos este valor, poderíamos estimar este número através de heurísticas
	// https://en.wikipedia.org/wiki/Prime_number_theorem

	int* arr_prim;
	
	int inf=700, sup=1000, est=168;
	int num, i, j;
	
	bool sum;

	printf("montando array de primos...\n");
	arr_prim = monta_array_primos(sup, est); //construiu vetor de primos (1ro com 3ro, 2do com 3ro.....)
	
	printf("verificando conjectura de Goldbach...\n");
	for (num=inf; num<=sup; num=num+2){ //pares
		sum = false;
		for (i=0; (i<=est && !sum); i++){
			for (j=i+1; (j<=est && !sum); j++){
				if (num == arr_prim[i] + arr_prim[j])
					sum = true;
			}
		}
		
		if (sum){
			printf("%d = %d + %d \n", num, arr_prim[i-1], arr_prim[j-1]);
			
		}else{
			printf("Fantastico! \n%d é par maior do que 2, mas nao eh soma de nenhum par de primos. \nJah posso coletar o premio Nobel de Matematica. \n", num);
			break;
		}
	}

	system("PAUSE");
	return 0;   
    
}
