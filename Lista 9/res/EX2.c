#include<stdlib.h>
#include<stdio.h> 


void simula_freq_faces_dado(int* freq, int lancamentos){
	int i, index;
	
	for(i=0;i<lancamentos;i++){
		index = rand()%6;
		*(freq+index)=*(freq+index)+1;
	}

	return;
}

int main()
{
	int i, n;
	time_t t;
	int freq[6]={0};
	
	srand((unsigned) time(&t));
	
	printf("Quantos lancamentos (n) devem ser simulados? ");
	scanf("%d",&n);
	
	simula_freq_faces_dado(freq, n);

	printf("\nA frequencia simulada para %d lancamentos: \n", n);
	for(i=0; i<6; i++){
		printf("face %d : %d (%.4f)\n", i+1, *(freq+i), (float)(*(freq+i))/n );
	}
	
  return 0;   
    
}
