/* Implemente um programa que receba um nome completo e
apresente apenas o ultimo e o primeiro nome. Considere todas
as entradas de nomes com apenas 3 nomes.
*/
#include<stdlib.h>
#include<stdio.h> 

int main()
{
  char primeiro_nome[11];
  char segundo_nome[11];
  char terceiro_nome[11];
  
  printf("Qual o seu primeiro nome? ");
  gets(primeiro_nome);
  
  printf("E seu nome do meio? ");
  gets(segundo_nome);
  
  printf("Hmm... Acho que conheco. Seu ultimo nome eh qual? ");
  gets(terceiro_nome);
  
  printf("Ola, %s %s. Meu nome eh Tom Riddle... \n", primeiro_nome, terceiro_nome);
 
  system("PAUSE");
  return 0;   
    
}
