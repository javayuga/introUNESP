#include<stdlib.h>
#include<stdio.h> 


int main()
{


int n;
printf("digite o valor de n: ");
scanf("%d", &n);
int vector[n][n];
int i, j;



for (i=0; i<=n; i++){
	for (j=0; j<=n; j++){
		if (j==i || j==0)
			vector[i][j] = 1;
		
		else if(i<j)
		vector[i][j] = 0;
		
		else
		vector[i][j] = vector[i-1][j-1]+vector[i-1][j];
	
		
	}
}

for (i=0; i<=n; i++){
	for (j=0; j<=n; j++)
	
		printf("%d\n", vector[i][j]);
}	
printf("\n");


system("PAUSE");
return 0;
}
