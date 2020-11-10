#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int dia;
  
  printf("1- Domingo; ");
  printf("\n2- Segunda; ");
  printf("\n3- Terca; ");
  printf("\n4- Quarta; ");
  printf("\n5- Quinta; ");
  printf("\n6- Sexta; ");
  printf("\n7- Sabado; ");
  
  printf("\n\nQue dia eh hoje? ");
  scanf("%d", &dia);
  
  switch (dia) {
    case 1:
      printf("Domingo nao eh dia util. Yey!\n");
      break;
    case 2:
      printf("Segunda eh dia util :( \n");
      break;
    case 3:
      printf("Terca eh dia util :( \n");
      break;
    case 4:
      printf("Quarta eh dia util :( \n");
      break;
    case 5:
      printf("Quinta eh dia util :( \n");
      break;
    case 6:
      printf("Sexta eh dia util :( \n");
      break;
    case 7:
      printf("Sabado nao eh dia util. Yey!\n");
      break; 
  }
  system("PAUSE");
  return 0;   
    
}
