#include<stdlib.h>
#include<stdio.h> 

int main()
{
	int i, n;
	int* seq;
	
	printf("Quantos elementos (n) na sequencia? ");
	scanf("%d",&n);
	
	seq = malloc(n * sizeof(int));
	
	for(i=0; i<n; i++){
		printf("seq[%d] = ", i);
		scanf("%d",&seq[i]);
	}
	
	printf("A sequencia original: \n");
	for(i=0; i<n; i++){
		printf("%d", seq[i]);
		if (i<n-1)
			printf(", ");
		
	}

	printf("\nA sequencia invertida: \n");
	for(i=n-1; i>=0; i--){
		printf("%d", seq[i]);
		if (i>0)
			printf(", ");
		
	}

	printf("\n\n");
	  
  system("PAUSE");
  return 0;   
    
}
