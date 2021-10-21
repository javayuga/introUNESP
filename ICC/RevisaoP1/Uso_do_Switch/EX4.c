#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int opcao, unidades;
  float preco;
  
  printf("    MERCEARIA DO BAIRRO     ");
  printf("\n100---Detergente---R$1,59;");
  printf("\n101----Esponja-----R$4,59;");
  printf("\n102----La de Aco---R$1,79;");     
  
  printf("\n\nDigite a opcao desejada: ");
  scanf("%d", &opcao);
  
  switch (opcao) {
  
    case 100:
      printf("Quantas unidades deseja? ");
      scanf("%d", &unidades);
      preco = unidades*1.59;
      printf("Voce deve pagar R$%.2f \n\n", preco); 
      break;    
    case 101:
      printf("Quantas unidades deseja? ");
      scanf("%d", &unidades);
      preco = unidades*4.59;
      printf("Voce deve pagar R$%.2f \n\n", preco);
      break;
    case 102:
      printf("Quantas unidades deseja? ");
      scanf("%d", &unidades);
      preco = unidades*1.79;
      printf("Voce deve pagar R$%.2f \n\n", preco);
      break;
    default:
      printf("Codigo invalido...\n\n");
  }
  
  system("PAUSE");
  return 0;   
    
}
