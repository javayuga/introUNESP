#include<stdlib.h>
#include<stdio.h> 

int contar_palavras(char frase[100], char palavra[100]) 
{
 int i=0, j=0, k=0;
 
 while (frase[i] != '0'){
    while( (frase[i+j] != '\0') && (palavra[j] != '\0') && (frase[i+j]==palavra[j]) );
       j++;
    if(palavra[j] == '\0')
       k++;
    j=0;
    i++;   
 }   
 
 return k;   
}

int main()
{
  char frase[100], palavra[100];
  
  printf("Digite uma frase: ");
  gets(frase);
  
  printf("Agora, digite uma palavra: ");
  gets(palavra);
  
  printf("Esse texto contem %d ocorrencias da palavra %s.\n\n", contar_palavras(frase, palavra), palavra);
  
  
  system("PAUSE");
  return 0;   
    
}
