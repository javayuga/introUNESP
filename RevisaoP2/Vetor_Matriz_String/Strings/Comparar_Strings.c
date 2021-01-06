/* Faça um programa que leia duas strings.
  Após isso, o programa deve concatenar as info. lidas e mostrar
o resultado para o usuário.
*/
#include<stdlib.h>
#include<stdio.h> 
#include<string.h>

int main()
{
  char palavra_1[11];
  char palavra_2[11];
  
  printf("Digite a primeira palavra: ");
  gets(palavra_1);
  
  printf("Digite a segunda palavra: ");
  gets(palavra_2);
  
  strcat(palavra_1, palavra_2);
  
  printf("A nova palavra formada eh %s. \n", palavra_1);
   
  system("PAUSE");
  return 0;   
    
}
