#include<stdlib.h>
#include<stdio.h> 


float calcular_troco(float troco_atual, float valor_face)
{
  int n;   
  n=troco_atual/valor_face;
  if(n>0)
    if(valor_face>1){
      if(n>1){
        printf("Devolver %d notas de R$%.2f;\n", n, valor_face);                        
      } else {
        printf("Devolver %d nota de R$%.2f;\n", n, valor_face);   
      }                      
    }else{
      if(n>1){
        printf("Devolver %d moedas de R$%.2f;\n", n, valor_face);          
      } else {
        printf("Devolver %d moeda de R$%.2f;\n", n, valor_face);       
      }                   
    }
    troco_atual=troco_atual-n*valor_face;    
       
  return troco_atual;
}

int main()
{
  float compra, pago, troco; 
  
  printf("Digite o valor da compra: R$");
  scanf("%f", &compra);
  printf("Digite o valor pago: R$");
  scanf("%f", &pago); 
  
  troco = pago-compra;

  if (troco==0){
    printf("Nao precisa devolver troco...\n");
    system("PAUSE");
    return 0;
  }
  else if (troco<0) {
    printf("Eai mermao vamo entregar o valor certo...?\n");
    system("PAUSE");
    return 0;     
  } 
  printf("O valor do troco eh R$%.2f\n", troco);   

  troco=calcular_troco(troco, 100); 
  troco=calcular_troco(troco, 50);
  troco=calcular_troco(troco, 20);
  troco=calcular_troco(troco, 10);
  troco=calcular_troco(troco, 5);
  troco=calcular_troco(troco, 2);
  
  troco=calcular_troco(troco, 1);
  troco=calcular_troco(troco, 0.5);
  troco=calcular_troco(troco, 0.25);
  troco=calcular_troco(troco, 0.1);
  troco=calcular_troco(troco, 0.05);
  troco=calcular_troco(troco, 0.01);
  
     /*n100=troco/100;
     if (n100>0){
       printf("Devolver %d notas de RS100.00;\n", n100);  
       troco=troco-n100*100;
     }
     n50=troco/50;
     if(n50>0){
       printf("Devolver %d notas de RS50.00;\n", n50);   
       troco=troco-n50*50;       
     }
     n20=troco/20;
     if(n20>0){
       printf("Devolver %d notas de RS20.00;\n", n20);   
       troco=troco-n20*20;     
         
     repetir esse processo n vezes!!! ---> melhor alternativa: criar função!! 
     } */
  system("PAUSE");
  return 0;   
    
}
