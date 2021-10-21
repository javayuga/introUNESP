#include<stdlib.h>
#include<stdio.h> 


int main()
{
  int ano;
  
  printf("Que ano estamos analizando? ");
  scanf("%d", &ano);
  
  if (ano%400==0)
    printf("Esse ano eh bissexto.\n");
  if (ano%4==0){
    if (ano%100!=0)
      printf("Esse ano eh bissexto.\n"); 
    else 
      printf("Esse ano nao eh bissexto.\n"); 
  }
  if (ano%400!=0)
    printf("Esse ano nao eh bissexto.\n");
  
  system("PAUSE");
  return 0;   
    
}


// pode ser escrito como: ano%400==0 || ano%4==0 && ano%100!=0
