#include<stdio.h>
#include<stdlib.h>

int main()
{
 int codigo, n; 
 float preco;
 
 printf("      SORVETERIA FLOCO DE NEVE               ");
 printf("\n\n");
 printf("1---------Refri Pequeno--------------RS1.50\n");
 printf("2----------Refri Grande--------------RS3.50\n");
 printf("3--------Suco de Laranja-------------RS3.00\n");
 printf("4------------Casquinha---------------RS2.50\n");
 printf("5------Casquinha c/ Cobertura--------RS3.75\n");
 printf("6-------Casquinha Dupla--------------RS4.50\n");
 printf("7---Casquinha Dupla c/ Cobertura-----RS5.50\n");
 printf("8------------Sundae------------------RS7.00\n");
 printf("9---------Banana Split---------------RS8.00\n");
 printf("10-------Especial da Casa------------RS13.99\n");
  
 printf("\n\nDigite o codigo do produto desejado ");
 scanf("%d", &codigo);
 printf("Quantas unidades deseja?");
 scanf("%d", &n);
 
 if(codigo==1){
   preco = 1.50*n ;            
   printf("\nO preco a pagar eh RS %.2f. Volte sempre!\n\n", preco);              
 }
  if(codigo==2){
   preco = 3.50*n ;            
   printf("\nO preco a pagar eh RS %.2f. Volte sempre!\n\n", preco);                
 }
  if(codigo==3){
   preco = 3.00*n ;            
   printf("\nO preco a pagar eh RS %.2f. Volte sempre!\n\n", preco);                 
 }
  if(codigo==4){
   preco = 2.50*n ;            
   printf("\nO preco a pagar eh RS %.2f. Volte sempre!\n\n", preco);               
 }
  if(codigo==5){
   preco = 3.75*n ;            
   printf("\nO preco a pagar eh RS %.2f. Volte sempre!\n\n", preco);                  
 }
  if(codigo==6){
   preco = 4.50*n ;            
   printf("\nO preco a pagar eh RS %.2f. Volte sempre!\n\n", preco);                 
 }
  if(codigo==7){
   preco = 5.50*n ;            
   printf("\nO preco a pagar eh RS %.2f. Volte sempre!\n\n", preco);                  
 }
  if(codigo==8){
   preco = 7.00*n ;            
   printf("\nO preco a pagar eh RS %.2f. Volte sempre!\n\n", preco);                
 }
  if(codigo==9){
   preco = 9.00*n ;            
   printf("\nO preco a pagar eh RS %.2f. Volte sempre!\n\n", preco);                 
 }
  if(codigo==10){
   preco = 13.99*n ;            
   printf("\nO preco a pagar eh RS %.2f. Volte sempre!\n\n", preco);                
 }

 system("PAUSE"); 
 return 0;   
    
}
