#include<stdlib.h>
#include<stdio.h> 

typedef struct Series{
	int termo;

	int* F;
	int* G;
};


struct Series calcula_Series(int k){
	struct Series s;
	s.termo = k;
	
	s.F = malloc(k*sizeof(int));
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
	int n;
	struct Series s;
	
	int desvio = 200;
	
  printf("Calcular as series ate qual termo? ");
  scanf("%d", &n);
  
  if (n<2){
	  printf("Termo m deve ser maior que 2 ");
		system("PAUSE");
		return 0;   
  	
	}
	
	s = calcula_Series(n+200);
	
	printf("F(%d) + G(%d) = %d \n", n-2, n+desvio, s.F[n-2] + s.G[n+desvio]);
	printf("F(%d) + G(%d) = %d \n", n+desvio, n-2, s.F[n+desvio] + s.G[n-2]);
	
	free(s.F);
	free(s.G);
	
	system("PAUSE");
	return 0;   
    
}
