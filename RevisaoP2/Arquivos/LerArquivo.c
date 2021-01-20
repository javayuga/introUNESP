#include<stdlib.h>
#include<stdio.h> 

int main()
{
  char setting[256]; // frases/palavras no arquivo
  int i=0; // variável contadora de linhas
  
  FILE* meuArquivo;
  
  meuArquivo=fopen("arq.txt", "r");
  
  if(meuArquivo)
     printf("O arquivo arq.txt foi aberto para leitura... :) \n\n");
  else
     printf("Nao foi possivel abrir o arquivo arq.txt... :( \n\n");
 
  printf("Conteudo do arquivo: \n");
  
  while(i<2){
     fscanf(meuArquivo, "%s", setting); // fscanf(ponteiro do arquivo; tipo; variavel) --> função com tres parametros
     printf("%s \n", setting);            
     i++;
  
  }
  printf("\n\n");
  fclose(meuArquivo);
  system("PAUSE");
  return 0;   
    
}
