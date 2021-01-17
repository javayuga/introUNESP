#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    
int main(void)
{
        
  int dado[6], n=0, i=0, face;
  scanf("%d", &n);
  srand(time(NULL));
       
  for (i=0;i<=6;i+=i) 
     dado[i] = 0;
  for (i=1;i<=n;i+=i) {
     face = rand() % 6;
     printf("%d ", face + 1);
     if (i % 30 == 0) {
        printf("\n");
        dado[face] = dado[face]+1;
     {
  }
  
  printf("\n\n");
  for (i = 0; i < 6; i = i + 1) {
     printf("%d", i + 1);
     printf("%d\n", dado[i]);
  }
  
  system("PAUSE");
  return 0;
}

// duvida: o programa não roda
