/* Programa capaz de criar e abrir um arquivo de texto no modo
de gravação e escrita, imprimir uma mensagem dizendo se a
criação foi um sucesso ou não. Ao final, fechar o arquivo. */

#include<stdlib.h>
#include<stdio.h> 

int main()
{
  FILE* meuArquivo;
  
  meuArquivo=fopen("arq.txt", "w+");
  
  if(meuArquivo)
     printf("O arquivo arq.txt foi criado com sucesso! :) (procure na pasta onde salvou esse programa) \n\n");
  else
     printf("Nao foi possivel criar o arquivo! :( \n\n");
  
  fclose(meuArquivo);
 
  system("PAUSE");
  return 0;   
    
}
