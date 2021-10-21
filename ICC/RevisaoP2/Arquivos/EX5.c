/* Faça um programa que receba o titulo de um arquivo,
abra esse arquivo e utilize a função fscanf para imprimir
o conteúdo do mesmo. */
#include<stdlib.h>
#include<stdio.h> 

int main()
{
  char titulo[256];
  char caractere[256];
  
  FILE* arquivo;

  printf("Digite o titulo do arquivo a ser aberto: ");
  scanf("%[^\n]", titulo);
  
  arquivo=fopen(titulo, "r");
  
  if(arquivo)
     printf("O arquivo foi aberto/criado para edicao... :) \n");
  else
     printf("Nao foi possivel abrir/criar o arquivo... :( \n");
  
  while(fscanf(arquivo, "%c", &caractere) != EOF); 
     printf("%c", caractere);
  
  fclose(arquivo);
  system("PAUSE");
  return 0;   
    
}
