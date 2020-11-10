#include<stdlib.h>
#include<stdio.h> 
#include <stdbool.h> 
int main()
{
 int valor, i, j ;
 
 printf("Insira um valor inteiro, positivo e nao nulo ");
 scanf("%d", &valor);
 
 printf("Os primos sao: ");
 if(valor%2==0){
  valor--;
 }

 for (i=valor; i>=3; i=i-2){
   bool primo = true; //variavel de verdadeiro/falso
   for (j=i-1;j>=3 && primo; j=j-1){
     if(i%j==0){
       primo=false;         
     }  
   }
   if(primo){
     printf("%d,", i);          
   }
 }
 printf("2,1\n");
 
 system("PAUSE");
 return 0;   
    
}
