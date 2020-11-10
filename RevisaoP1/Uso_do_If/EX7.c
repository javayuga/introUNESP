#include<stdlib.h>
#include<stdio.h> 

int main()
{
  float p1, p2, trabalho, media_provas, media_final;
  
  printf("Informe a nota da p1: ");
  scanf("%f", &p1); 
  printf("Informe a nota da p2: ");
  scanf("%f", &p2); 
  printf("Informe a nota do trabalho: ");
  scanf("%f", &trabalho);  
  
  media_provas = ((4*p1)+(6*p2))/10;
  
  if (media_provas>=5)
    media_final=(media_provas+trabalho)/2;
    
  else
    media_final=((7*media_provas)+(3*trabalho))/10;
    
  if (media_final>=6)
    printf("O aluno foi aprovado na materia com a nota %.2f.\n", media_final);
  else 
    printf("O aluno reprovou na materia com a nota %.2f.\n", media_final);  
 
  system("PAUSE");
  return 0;   
    
}
