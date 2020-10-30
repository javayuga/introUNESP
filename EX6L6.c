#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
 int i=0,n, fat;
 float x, parcela=0, dif, soma_atual=0, soma_anterior=0;
 float epsilon = 0.000001;
 //dif=1 pois 0 é menor que 10^-7
 
 printf("Informe o valor de x: ");
 scanf("%f", &x);
 
 
 do{ 
   n=i;
   for (fat = 1; n > 1; n = n - 1){
     fat = fat * n;
   }
   soma_anterior = soma_atual;
   parcela = pow(x,i)/fat;
   soma_atual = soma_anterior+parcela; 
   dif = soma_atual-soma_anterior;  
   
   printf("i=%d\n",i);
   printf("fat=%d\n",fat);     
   printf("soma_atual=%.8f\n",soma_atual);
   printf("soma_anterior=%.8f\n",soma_anterior);
   printf("parcela=%.8f\n",parcela);
   printf("dif=%.8f\n\n",dif);
   
   i++;
 }
 while (dif>epsilon);
 
 printf("e^=%.8f\n",soma_atual);
 printf("i=%d\n", i);
  
 system("PAUSE");
 return 0;
}
