/* Fa�a um programa capaz de abrir e fechar um determinado
arquivo de texto chamado "arq.txt". Sabe-se que esse programa
� capaz unicamente de ler ou gravar informa��es, e que um 
arquivo com esse nome deve ser criado durante a execu��o do 
programa, caso n�o exista outro de mesmo nome.*/

#include<stdlib.h>
#include<stdio.h> 

int main()
{
  FILE* meuArquivo;
  
  meuArquivo=fopen("arq.txt", "w");
  
  if(meuArquivo)
     printf("O arquivo arq.txt foi criado com sucesso! :) (procure na pasta onde salvou esse programa) \n\n");
  else
     printf("Nao foi possivel criar o arquivo! :( \n\n");
  
  fclose(meuArquivo);
  
  
  
  system("PAUSE");
  return 0;   
    
}
