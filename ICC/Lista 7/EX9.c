#include<stdio.h>
#include<stdlib.h>

int main()
{
  float indice;
  
  printf("Informar o indice de poluicao no seu local de pesquisa: ");
  scanf("%f", &indice);
  
  if (indice>=0.05 && indice<=0.25){
    printf("\nOtimo indice! Nao ha nada para se preocupar ;) \n\n");
  }
  if (indice>0.25 && indice<=0.3){
    printf("\nEita... Sem panico... Cancele atividades do grupo 1. \n\n");
  }
  if (indice>0.3 && indice<=0.4){
    printf("\nOk... Preocupante. Cancele atividades do grupo 1 e 2.\n\n");
  }
  if (indice>0.4 && indice<=0.5){
    printf("\nCancele atividades do grupo 1, 2 e 3 plmr de deus.\n\n");
  }

 system("PAUSE"); 
 return 0;   
    
}
