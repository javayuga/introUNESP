/* Criar um programa capaz de atualizar todos os dados presentes
em um arquivo ("dadosImportantes.txt") para um novo formato de 
armazenamento.  */

#include<stdlib.h>
#include<stdio.h> 

int main()
{
  FILE* arq;
  
  arq=fopen("dadosImportantes.txt", "r+");
  
  if(arq)
     printf("O arquivo dadosImportantes.txt esta pronto para uso! :) (procure na pasta onde salvou esse programa) \n\n");
  else
     printf("Nao foi possivel criar o arquivo! :( \n\n");
  
  // ...codigo de alteracao dos dados...
  
  fclose(arq);
  
  
  
  system("PAUSE");
  return 0;   
    
}
