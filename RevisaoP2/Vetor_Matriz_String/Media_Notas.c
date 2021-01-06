#include<stdlib.h>
#include<stdio.h>

int main()
{
  int i=0;
  float media=0, notas[3], somatorio=0;
  
  
  for(i=0; i<3; i++) {
     printf("Digite a primeira, segunda e terceira nota do aluno: ");
     scanf("%f", &notas[i]);
     
     somatorio += notas[i];         
  }
  media = somatorio / 3;
  printf("A media do aluno eh %.2f. \n", media);
    
    
    
  system("PAUSE");
  return 0;   
}
