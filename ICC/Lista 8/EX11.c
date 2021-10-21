#include<stdlib.h>
#include<stdio.h>

int determinar_paridade(int* num, int tam){
	int i=0;
	int paridade;

	if (num[i]%2==0){
		paridade=0;	
	}else{
		paridade=1;
	}
	
	for(i=1; i<tam; i++){
		if (num[i]%2==0)
			if (paridade!=0) paridade=-1;
		else
			if (paridade!=1) paridade=-1;
	}
	
	return paridade;
}


int main()
{
	int i, tam;

	printf("tamanho da array : ");
	scanf("%d", &tam);

	if (tam<1){
		printf("array precisa ter mais do que um elemento \n");
		system("PAUSE");
		return 0;   
	}

	int* num = malloc(tam * sizeof(int));
	
	for(i=0; i<tam; i++){
		printf("entre o elemento %i: ", i);
		scanf("%d", &num[i]);
		
		printf("\n");
	}
	
	int paridade;
	
	paridade = determinar_paridade(num, tam);
	
	if (paridade==1){
		printf("paridade impar \n\n");
		
	}else if (paridade==0){
		printf("paridade par \n\n");
		
	}else{
		printf("paridade distinta \n\n");
		
	}
	
	free(num);

	system("PAUSE");
	return 0;   
}
