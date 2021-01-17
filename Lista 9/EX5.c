#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int n, i, j, vezes=1;
  float sequencia[100];
  
  printf("Informe quantos elementos existem na sequencia: ");
  scanf("%d", &n);
  
  printf("Agora, digite a sequencia de %d numeros inteiros e reais: \n", n);
  
  for(i=0;i<n;i++)
    scanf("%f", &sequencia[i]);
  for(i=0;i<n;i++) {
     j=i+1; 
     while(j<n){
        if(sequencia[j] != sequencia[i])
           j++;
        else {
           vezes++;
           n--;
           sequencia[j]=sequencia[n];
        }
     }
  printf("%.2f ocorre %d vezes...\n", sequencia[i], vezes);
  }

  system("PAUSE");
  return 0;   
    
}
