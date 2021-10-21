/* Faça um programa que receba um título e um texto, ambos
inseridos pelo usuário. Crie um arquivo que tenha como nome
o título e grave nesse arquivo o texto fornecido.*/
#include<stdlib.h>
#include<stdio.h> 

int main()
{
  char titulo[256];
  char texto[256];
  
  FILE* arquivo;
 
  printf("Digite um titulo para o seu arquivo: ");
  scanf("%[^\n]%*c", titulo);
  
  printf("Agora, digite um texto de ate 256 caracteres: ");
  scanf("%[^\n]", texto);
  
  arquivo=fopen(titulo, "w");
  if(arquivo)
     printf("O arquivo foi aberto/criado para edicao... :) \n");
  else
     printf("Nao foi possivel abrir/criar o arquivo... :( \n");
  
  fprintf(arquivo, "%s", texto);
  
  printf("Abra o seu arquivo na pasta onde salvou esse programa e veja a magica acontecer :) \n\n");
  
  fclose(arquivo);
  system("PAUSE");
  return 0;   
    
}
