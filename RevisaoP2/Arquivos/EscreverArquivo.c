#include<stdlib.h>
#include<stdio.h> 

int main()
{
  char frase[256] = "Eae carai bom dia fml tamo junto" ; 
  
  FILE* meuArquivo;
  
  meuArquivo=fopen("arq.txt", "w");
  
  if(meuArquivo)
     printf("O arquivo arq.txt foi aberto para escrita... :) \n\n");
  else
     printf("Nao foi possivel abrir o arquivo arq.txt... :( \n\n");
 
  fprintf(meuArquivo, "%s", frase); // função com 3 parametros
  
  
  fclose(meuArquivo);
         
  system("PAUSE");
  return 0;   
    
}
