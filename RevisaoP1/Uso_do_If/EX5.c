#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int lados;
  
  printf("Informe o numero de lados do seu objeto: ");
  scanf("%d", &lados);
  
  if (lados==3)
    printf("Esse objeto eh um triangulo.\n");
  if (lados==4)
    printf("Esse objeto eh um quadrilatero.\n");
  if (lados==5) 
    printf("Esse objeto eh um pentagono.\n");
  
  system("PAUSE");
  return 0;   
    
}
