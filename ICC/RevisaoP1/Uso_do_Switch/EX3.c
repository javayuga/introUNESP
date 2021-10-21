#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int numero;
  float numero1, numero2, soma, subt, div, multi;
  
  printf("1- Soma; ");
  printf("\n2- Subtracao; ");
  printf("\n3- Multiplicacao; ");
  printf("\n4- Divisao; ");
  
  printf("\n\nDigite a operacao desejada: ");
  scanf("%d", &numero);
  
  switch (numero) {
    case 1:
      printf("Informe dois valores: ");
      scanf("%f%f", &numero1, &numero2);
      
      soma = numero1+numero2;
      
      printf("O valor da soma eh %.2f.\n\n", soma);
      break;
    case 2:
      printf("Informe dois valores: ");
      scanf("%f%f", &numero1, &numero2);
      
      subt = numero1-numero2;
      
      printf("O valor da subtracao de %f e %f eh %.2f. \n\n", numero1, numero2 ,subt);
      break;
    case 3:
      printf("Informe dois valores: ");
      scanf("%f%f", &numero1, &numero2);
      
      multi = numero1*numero2;
      
      printf("O valor da multiplicacao eh %.2f \n\n", multi);
      break;
    case 4:
      printf("Informe dois valores: ");
      scanf("%f%f", &numero1, &numero2);
      
      div = (numero1/numero2);
      
      printf("O valor da divisao de %f e %f eh %.2f \n\n", numero1, numero2, div);
      break;
    default:
      printf("Digite uma opcao valida...\n");
      
  }
 
  system("PAUSE");
  return 0;   
    
}
