#include<stdlib.h>
#include<stdio.h> 

int checar_bissexto(int ano)
{
  if (ano%400==0 || (ano%4==0 && ano%100!=0) ){
    return 1;
  }
  return 0; 
}

int main()
{
  int entrada, bissexto;
  
  printf("Que ano estamos analizando? ");
  scanf("%d", &entrada);
  
  bissexto=checar_bissexto(entrada);
  
  if(bissexto==1){
   printf("Esse ano eh bissexto \n");  
   system("PAUSE");
   return 0;
  }
