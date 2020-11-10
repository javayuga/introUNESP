#include<stdlib.h>
#include<stdio.h> 

int main()
{ 
  int nascimento, idade;
  
  
  printf("Informe o ano em que nasceu: ");
  scanf("%d", &nascimento);
  
  idade = 2020 - nascimento;
  
  if (idade>=16)
    printf("Nao votando no biroliro, pode votar...\n");
  else 
    printf("Nao tem idade para votar.\n"); 

  system("PAUSE");
  return 0;   
    
}
