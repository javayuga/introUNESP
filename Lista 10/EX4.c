#include<stdlib.h>
#include<stdio.h> 

typedef struct
{
  int matricula;
  char nome[20];
  float nota[3];
    
} icc;

int main()
{
  icc registro[5];
  int i;
  float media, maiornota1=0, mediageral=5;
  char lixo;

  printf("Informacoes dos estudantes de icc: \n");
  
  for (i=0; i<5; i++){
      
     printf("Informe os dois primeiros nomes do %dro estudante: ", i+1);
     gets(registro[i].nome); 
     
     printf("Agora, o numero da matricula: ");
     scanf("%d", &registro[i].matricula);
    
     printf("Nota da primeira prova: ");
     scanf("%f", &registro[i].nota[0]);  
     
     printf("Nota da segunda prova: ");
     scanf("%f", &registro[i].nota[1]);
     
     printf("Nota da terceira prova: ");
     scanf("%f", &registro[i].nota[2]);
     
     printf("A media desse aluno eh %.2f ", media=(registro[i].nota[0]+registro[i].nota[1]+registro[i].nota[2])/3 );
     
     if(media<5)
        printf(" ---> REPROVADO");
     else 
        printf(" ---> APROVADO");
        
     if(registro[i].nota[0]>maiornota1)
        maiornota1=registro[i].nota[0];
        

     lixo=getchar();
     printf("\n\n");
  }  
  
  printf("\n O(s) nome(s) do(s) aluno(s) com maior nota da primeira prova: "); 
  for(i=0;i<5;i++) {
     if (maiornota1 == registro[i].nota[0]) 
        printf("\n Nome do aluno: %s", registro[i].nome);
  }

  printf("\n\n");
      
  system("PAUSE");
  return 0;   
    
}

// como encontrar a maior media??
