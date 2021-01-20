#include<stdlib.h>
#include<stdio.h> 

typedef struct 
{
  char nome[20];
  char diretor[20];
  int ano;
  int duracao;     
} filmes;

int main()
{
  filmes lista[5];
  
  int i;
  char lixo;
  
  printf("      Listagem de 5 filmes\n");
  
  for (i=0;i<5;i++){
      
     printf("\nFilme %d---------------------- \n", i+1);
     
     printf("Nome: ");
     fflush(stdin);
     gets(lista[i].nome);
    
     printf("Ano: ");
     scanf("%d", &lista[i].ano);
     
     printf("Diretor: ");
     fflush(stdin);
     gets(lista[i].diretor);
     
     printf("Duracao (em min): ");
     scanf("%d", &lista[i].duracao);
     
     printf("\n\n");
         
     lixo=getchar();
  }
       

  system("PAUSE");
  return 0;   
    
}
