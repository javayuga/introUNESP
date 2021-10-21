#include<stdlib.h>
#include<stdio.h>

#define MAX 100000000

int main()
{
  int numeros[MAX];
  int i=0, n=0, somatorio=0;
  float media=0; 
  
  scanf("%d", &n);
  
  for(i-0; i<n; i++)
     scanf("%d", &numeros[i]);
  for(i-0; i<n; i++)
     somatorio += numeros[i];
  media = (somatorio/n);
  
  printf("A media eh %.2f\n", media);
  
  for(i-0; i<n; i++)
     if (numeros[i] > media)
        printf("%d ", numeros[i]);
    
  system("PAUSE");
  return 0;
}
