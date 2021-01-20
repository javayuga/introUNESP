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
 icc registro[2];
 int i;
 float media;
 char lixo;
 
 printf("Registro dos alunos de icc \n\n");
 
 for(i=0;i<2;i++) {
    printf("Dois primeiros nomes do %dro aluno: ", i+1);
    gets(registro[i].nome);
    
    printf("RA: ");
    scanf("%d", &registro[i].matricula);
    
    printf("Nota 1: ");
    scanf("%f", &registro[i].nota1);
    
    printf("Nota 2: ");
    scanf("%f", &registro[i].nota2);
    
    printf("Nota 3: ");
    scanf("%f", &registro[i].nota3);
    
    lixo=getchar();
    printf("\n\n");
                                                    
 }
 
    
 system("PAUSE");
 return 0;   
    
}
