/* Faça um programa que abra um arquivo de texto e mostre
quantas linhas esse arquivo possui. */

#include<stdlib.h>
#include<stdio.h> 

int main()
{ 
  int i=1;
  char caracteres;
  
  FILE* arquivo;
  
  arquivo=fopen("Arquivos(Resumo).txt", "r");
  
  if(arquivo)
     printf("O arquivo Arquivo(Resumo).txt foi aberto/criado para leitura... :) \n");
  else
     printf("Nao foi possivel abrir/criar o arquivo Arquivos(Resumo).txt... :( \n");
 
  while(fscanf(arquivo, "%c", &caracteres) != EOF){
     if(caracteres=='\n')
        i++;
  }
  printf("Nesse arquivo, existem %d linha(s).\n\n", i); //47
  
  fclose(arquivo);
  system("PAUSE");
  return 0;   
    
}
