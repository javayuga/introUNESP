#include<stdio.h>
#include<stdlib.h>

int main()
{
 int codigo;
 float p1=1.50, p2=3.50, p3=3.00, p4=2.50, p5=3.75, p6=4.50, p7=5.50, p8=7.00, p9=8.00, p10=13.99;  
 

 printf("001---------Refri Pequeno--------------RS1.50\n");
 printf("002----------Refri Grande--------------RS3.50\n");
 printf("003--------Suco de Laranja-------------RS3.00\n");
 printf("004------------Casquinha---------------RS2.50\n");
 printf("005------Casquinha c/ Cobertura--------RS3.75\n");
 printf("006-------Casquinha Dupla--------------RS4.50\n");
 printf("007---Casquinha Dupla c/ Cobertura-----RS5.50\n");
 printf("008------------Sundae------------------RS7.00\n");
 printf("009---------Banana Split---------------RS8.00\n");
 printf("010--------Especial da Casa------------RS13.99\n");
  
 printf("Digite o codigo do produto desejado ");
 scanf("%d", &codigo);

 if(codigo==001){
   printf("O preco a pagar eh RS1.50\n");              
 }
  if(codigo==002){
   printf("O preco a pagar eh RS3.50\n");                 
 }
  if(codigo==003){
   printf("O preco a pagar eh RS3.00\n");                 
 }
  if(codigo==004){
   printf("O preco a pagar eh RS2.50\n");                 
 }
  if(codigo==005){
   printf("O preco a pagar eh RS3.75\n");                 
 }
  if(codigo==006){
  printf("O preco a pagar eh RS4.50\n");                  
 }
  if(codigo==007){
   printf("O preco a pagar eh RS5.50\n");                 
 }
  if(codigo==008){
   printf("O preco a pagar eh RS7.00\n");                 
 }
  if(codigo==009){
   printf("O preco a pagar eh RS8.00\n");                 
 }
  if(codigo==010){
   printf("O preco a pagar eh RS13.99\n");                 
 }

 system("PAUSE"); 
 return 0;   
    
}
