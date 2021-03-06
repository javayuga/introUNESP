#include<stdlib.h>
#include<stdio.h> 

typedef struct Series{
	int termo; // quantos termos temos? (n de elementos)

	int* F;  // serie: vetor (* -> indica que � vetor)
	int* G;
};  


struct Series calcula_Series(int k){
	struct Series s;
	s.termo = k; // k= n termos
	
	s.F = malloc(k*sizeof(int)); // k= quantas posi��es o vetor tem
	s.G = malloc(k*sizeof(int));
	
	s.F[0]=2;
	s.F[1]=1;
	
	s.G[0]=1;
	s.G[1]=2;
	
	int i;
	for (i=2;i<=k;i++){
		s.F[i]=2*s.F[i-1] + s.G[i-2];
		s.G[i]=s.G[i-1] + 3*s.F[i-2];
		
	}
	
	return s;
}


int main()
{
	int k;
	struct Series s;
	
  printf("Calcular as series de recorrencia ate qual termo? ");
  scanf("%d", &k);
  
  if (k<3){
	  printf("Termo k deve ser maior ou igual a 3 ");
		system("PAUSE");
		return 0;   
  	
	}
	
	s = calcula_Series(k);
	
	printf("F(%d)=%d G(%d)=%d \n", k, s.F[k-1], k, s.G[k-1]);
	
	free(s.F);
	free(s.G);
	
	system("PAUSE");
	return 0;   
    
}
