#include<stdlib.h>
#include<stdio.h> 

int main()
{
  char nome[256];
  char sobrenome[256];
  int i=0; 
  
  FILE* arquivo;
  
  arquivo=fopen("texto.txt", "w");
  
  if(arquivo)
     printf("O arquivo arq.txt foi aberto para escrita... :) \n\n");
  else
     printf("Nao foi possivel abrir o arquivo arq.txt... :( \n\n");
  
  printf("Digite o nome e sobrenome de 30 alunos: \n\n");
  for(i=0;i<30;i++) {
                    
     printf("Aluno %d----------------------- \n", i+1);
     
     printf("Nome: ");
     scanf("%s", nome);
     
     printf("Sobrenome: ");
     scanf("%s", sobrenome);                
      
     fputs(nome, arquivo);
     fputs(" ", arquivo);
     
     fputs(sobrenome, arquivo);  
     fputs("\n", arquivo);             
  }                  
  
  printf("\nAbra o arquivo e confira se todos os nomes estao la. \n\n");
  
  fclose(arquivo);
  system("PAUSE");
  return 0;   
    
}
