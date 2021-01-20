/* Escreva um programa que crie/abra um arquivo de texto denominado
"exercicios.txt" e permita que o usuario grave diversos caracteres
nesse arquivo até que entre com o caractere "0". Por fim, o arquivo
deve ser fechado. */

#include<stdlib.h>
#include<stdio.h> 

int main()
{
  char caracteres;
  //int i=0;
  
  FILE* arquivo;
  
  arquivo=fopen("exercicios.txt", "w+");
  
  if(arquivo)
     printf("O arquivo exercicios.txt foi aberto/criado para escrita... :) \n");
  else
     printf("Nao foi possivel abrir/criar o arquivo exercicios.txt... :( \n");
 
  printf("Digite o texto desejado. Quando finalizar, digite 0 para fechar o programa... \n\n");
  
  while(1){
     scanf("%c", &caracteres);
     if(caracteres=='0')
        break;
     fprintf(arquivo, "%c", caracteres);         
  }
  printf("\n\n");
  
  fclose(arquivo);
  system("PAUSE");
  return 0;   
    
}
