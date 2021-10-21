/* Faça um programa que abra um arquivo de texto e mostre 
na tela quantos caracteres desse arquivo são vogais.*/
#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int vogal=0;
  char caractere;
  
  FILE* arquivo;
  
  arquivo=fopen("Arquivos(Resumo).txt", "r");
  
  if(arquivo)
     printf("O arquivo Arquivo(Resumo).txt foi aberto/criado para leitura... :) \n");
  else
     printf("Nao foi possivel abrir/criar o arquivo Arquivos(Resumo).txt... :( \n");
  
  while (fscanf(arquivo, "%c", &caractere) != EOF){
     if(caractere=='A' || caractere=='a')
        vogal++;    
     else if(caractere=='E' || caractere=='e')
        vogal++;
     else if(caractere=='I' || caractere=='i')
        vogal++;    
     else if(caractere=='O' || caractere=='o')
        vogal++;  
     else if(caractere=='U' || caractere=='u')
        vogal++;  
  }
  
  printf("Nesse arquivo, existem %d vogais.\n\n", vogal);
  
  fclose(arquivo);
  system("PAUSE");
  return 0;   
    
}
