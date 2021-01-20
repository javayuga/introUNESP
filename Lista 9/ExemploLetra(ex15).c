#include<stdlib.h>
#include<stdio.h>

int main()
{
  char palavra[50], letra, lixo;
  int i=0, j=0;
  
  printf("Informe uma palavra: ");
  scanf("%s", palavra);
  
  lixo=getchar();
  
  printf("Agora, informe uma letra: ");
  scanf("%c", &letra);
  
  while(palavra[i] != '\0'){
     if (palavra[i] == letra)
        j++;
     i++;
  }
  
  printf("\nOcorrencias: %d.\n\n", j);
  
  system("PAUSE");
  return 0;   
    
}
