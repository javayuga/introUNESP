#include<stdlib.h>
#include<stdio.h> 

int main()
{
  float nota, soma, media;
  int n=0;
  
  while(n<10){
    printf("Digite as notas do aluno: ");
    scanf("%f", &nota);
    soma += nota;
    n++;
  }
  
  media=soma/10;
  
  printf("\nA media aritmetica eh %.2f\n\n", media);
 
 
  system("PAUSE");
  return 0;   
    
}
