#include<stdlib.h>
#include<stdio.h> 

typedef struct
{
  int matricula;
  char nome[20];
  float nota[3];
  float media;
    
} icc;

int main()
{
  icc registro[2];
  int i;
  float media, maiornota1=0, maiormedia=0, menormedia=10;
  char lixo;

  printf("Informacoes dos estudantes de icc: \n\n\n");
  
  for (i=0; i<2; i++){
      
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
     
     registro[i].media = (registro[i].nota[0]+registro[i].nota[1]+registro[i].nota[2])/3;
     
     printf("A media desse aluno eh %.2f ", registro[i].media);
     
     if(registro[i].media<5)
        printf(" ---> REPROVADO");
     else 
        printf(" ---> APROVADO");
        
     if(registro[i].nota[0]>maiornota1)
        maiornota1=registro[i].nota[0];
        
     if(registro[i].media>maiormedia)
        maiormedia=registro[i].media;
     
     if(registro[i].media<menormedia)
        menormedia=registro[i].media;
        
     lixo=getchar();
     printf("\n\n");
  }  
  
  printf("\n O(s) nome(s) do(s) aluno(s) com maior nota da primeira prova: "); 
  for(i=0;i<2;i++) {
     if (maiornota1 == registro[i].nota[0]) 
        printf("\n Nome do aluno: %s", registro[i].nome);
  }
  
  printf("\n O(s) nome(s) do(s) aluno(s) com maior media: "); 
  for(i=0;i<2;i++) {
     if (maiormedia == registro[i].media) 
        printf("\n Nome do aluno: %s", registro[i].nome);
  }
  
  printf("\n O(s) nome(s) do(s) aluno(s) com menor media: "); 
  for(i=0;i<2;i++) {
     if (menormedia == registro[i].media) 
        printf("\n Nome do aluno: %s", registro[i].nome);
  }

  printf("\n\n");
      
  system("PAUSE");
  return 0;   
    
}

