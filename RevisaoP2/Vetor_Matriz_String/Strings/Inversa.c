/* Faça um programa que leia uma string e armazene-a
invertida em outra string. Utilize uma estrutura de
repetição para varrer e imprimir a nova string.
*/

#include<stdlib.h>
#include<stdio.h> 
#include<string.h>


int main()
{
  char palavra[11];
  char inversa[11];
  
  int i=0, letra=0;
  
  printf("Digite uma palavra de ate 10 letras: ");
  gets(palavra);  
  
  for (i=strlen(palavra)-1; i>=0; i--) {
     inversa[letra] = palavra[i];
     letra++;  
  }
  inversa[letra]='\0';
  
  printf("A sua inversa eh %s.\n", inversa);
 
  system("PAUSE");
  return 0;   
    
}

// são 10 espaços para as letras + 1 espaço para o \0
