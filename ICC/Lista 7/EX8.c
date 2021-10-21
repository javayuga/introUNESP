#include<stdio.h>
#include<stdlib.h>

int main()
{
 int parcela;
 float preco, pagar;
 
 printf("Digite o preco do produto: ");
 scanf("%f", &preco);
 
 printf("Agora, digite: ");
 printf("\n1 para pagar a vista");
 printf("\n3 para pagar em 3 parcelas");
 printf("\n5 para pagar em 5 parcelas");
 printf("\n");
 scanf("%d", &parcela);   
 
 switch(parcela){
   case 1:
   pagar=preco;
   printf("O cliente deve pagar RS %.2f\n", pagar);
   break;
   
   case 3:
   pagar=preco+(preco*0.1);
   printf("O cliente deve pagar RS %.2f\n", pagar);
   break;
   
   case 5:
   pagar=preco+(preco*0.2);
   printf("O cliente deve pagar RS %.2f\n", pagar);
   break;
 }
      
  system("PAUSE"); 
  return 0;   
    
}
