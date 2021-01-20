#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    
int main(void)
{
        
  int dado[6], n=0, i=0, face;
  
  printf("Informe quantas vezes o dado sera lancado: ");
  scanf("%d", &n);
  srand(time(NULL));
       
  for (i=0;i<=6;i++) 
     dado[i] = 0; 
  
  for (i=1;i<=n;i++) {
     face = rand() % 6;
     printf("%d ", face + 1);
     dado[face] = dado[face]+1;  
  }
  printf("\n\n");
  
  for (i = 0; i < 6; i++)
     printf("face %d -> %d vezes \n", i + 1, dado[i]);
  
  system("PAUSE");
  return 0;
}

// duvida: o programa não roda
