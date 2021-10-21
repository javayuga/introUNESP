#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
 float x, y, dx, dy, r;
 int n, i, j, repete;
 float coord_x[n], coord_y[n], raio[n];   
 
   
 printf("Digite a coordenada de x do ponto: ");
 scanf("%f", &x);
 
 printf("Digite a coordenada de y do ponto: ");
 scanf("%f", &y);
 
 printf("Agora, digite o numero de pontos entre 1 e 100: ");
 scanf("%d", &n);
 
 if(n<1 || n>100)
    printf("O numero deve ser 1<n<100. Digite novamente.");
 
 for(i=0;i<n;i++) {
   printf("Valor da coordenada de x%d: ",i+1);
   scanf("%f", &coord_x[i]);
   
   printf("Valor da coordenada de y%d: ",i+i);
   scanf("%f", &coord_y[i]);   
 }
 
 for(i=0;i<n;i++) {
    dx=pow(x-coord_x[i],2);
    dy=pow(y-coord_y[i],2);
    r=sqrt(x+y);  
    raio[i]=r;
    for(j=0;j<i;j++) {
       if(r==raio[j])
          repete=1;
       if(repete==0)
         printf("O raio da circunferencia centrada nesses pontos eh: %.2f \n\n", r);  
    }             
 }
    
 system("PAUSE");
 return 0;   
    
}

// dúvida: n]ao roda...
