#include<stdio.h>
#include<stdlib.h>

int main()
{
 int opcao;
 float valor, pagar1, pagar2, pagar3;
 
 printf("  CODIGO DOS CLIENTES  ");
 printf("\n\n1------Cliente Comum ");
 printf("\n2--------Cliente VIP ");
 printf("\n3--------Funcionario ");
 
 printf("\n\nDigite o codigo do cliente ");
 scanf("%d", &opcao);
 
 switch(opcao){
   case 1:
   printf("\nDigite o valor da compra ");
   scanf("%f", &valor);
   pagar1 = valor;
   printf("\nO valor a pagar eh RS %.2f ", pagar1);
   break; 
   
   case 2:
   printf("\nDigite o valor da compra ");
   scanf("%f", &valor);
   pagar2 = valor*0.1;
   printf("\nO valor a pagar eh RS %.2f ", pagar2);
   break;
   
   case 3:
   printf("\nDigite o valor da compra ");
   scanf("%f", &valor);
   pagar3 = valor*0.05;
   printf("\nO valor a pagar eh RS %.2f", pagar3);
   break;
   
   default:
   printf("Codigo invalido");
 }
 printf("\n\n");
 system("PAUSE"); 
 return 0;   
    
}
