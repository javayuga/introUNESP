#include<stdlib.h>
#include<stdio.h> 

typedef struct
{
  int matricula;
  char nome[20];
  float nota1;
  float nota2;
  float nota3;
   
} icc;

int main()
{
  int i;
  float media;
  
  printf("Informacoes dos estudantes de icc: \n");
  
  for (i=0; i<5; i++){
     printf("Informe o numero da matricula do %dro estudante: ", i+1);
     scanf("%d", &icc[i].matricula);
     
     printf("Agora, os dois primeiros nomes: ");
     gets(icc[i].nome);
     
     printf("Nota da primeira prova: ");
     scanf("%f", &icc[i].nota1);
     
     printf("Nota da segunda prova: ");
     scanf("%f", &icc[i].nota2);
     
     printf("Nota da terceira prova: ");
     scanf("%f", &icc[i].nota3);

  }  
     
     
  system("PAUSE");
  return 0;   
    
}
