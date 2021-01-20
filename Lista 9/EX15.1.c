#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int i=0, j=0, ocorrencias=0;
  char str1[256], str2[256];
  
  printf("Insira uma palavra: ");
  gets(str1);
  
  printf("Insira uma frase: ");
  gets(str2);
  
  while (str2[j]!='\0') {
     if(str1[i]==str2[j]) {
        i++;
        j++; 
     }                                  
     if(str1[i]=='\0') {
        ocorrencias++;
        i=0;
        j--;
     } 
     if(str1[i]!=str2[j]){
        i=0;
        j++;
     }   
  }
  
  printf("O numero de ocorrencias da palavra %s na frase foi %d...\n\n", str1, ocorrencias);
    
  system("PAUSE");
  return 0;   
    
}
