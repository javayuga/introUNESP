#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int n=0, soma=0, i=0;
  
  printf("Informe o valor n desejado: ");
  scanf("%d", &n); 
  
  for(i=1; i<=n; i++){
    soma+=i; 
  }
  printf("O valor da soma de 1 ate %d eh %d.\n\n", n, soma);

  system("PAUSE");
  return 0;   
    
}
