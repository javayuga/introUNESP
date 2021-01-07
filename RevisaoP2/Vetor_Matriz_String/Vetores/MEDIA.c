#include<stdlib.h>
#include<stdio.h> 


int main()
{
  int* elementos;
  int n, i;
  float media, soma;
   
  printf("Digite a quantidade de elementos num intervalo de 1 a 100: ");
  scanf("%d", &n);
  
  if(n<1 || n>100) {
     printf("O numero %d eh invalido. Tente novamente. \n\n", n);
     
     system("PAUSE");
     return 0;
  }
  elementos = (int *) malloc(n);
  
  for(i=0;i<n;i++) {
     printf("Digite o elemento da posicao %d: ", i);
     scanf("%d", &elementos[i]);                
  }
  for(i=0;i<n;i++) {
     soma+=elementos[i];
  }
  media=soma/n;
  printf("A media dos elementos eh %.2f. \n", media);
  printf("Os elementos maiores que a media: ");
   
  for (i=0;i<n;i++) {
     if (elementos[i]>media) {
        printf("%d ", elementos[i]);
     }
      
  }

  system("PAUSE");
  free(elementos);
  return 0;   
    
}
