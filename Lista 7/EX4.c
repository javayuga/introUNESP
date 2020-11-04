#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  float a, b, c, delta, x1, x2;
	
  printf("Informe a: ");
  scanf("%f",&a);
  printf("Informe b: ");
  scanf("%f",&b);
  printf("Informe c: ");
  scanf("%f",&c);
  
  delta = pow(b,2) - 4*a*c; 
	
  if(delta > 0){
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    printf("\nAs raizes sao %.2f e %.2f.\n", x1, x2);
  }
  if (delta == 0){
    x1 = (-b + sqrt(delta))/(2*a);
    printf("\nExiste apenas uma raiz real, que eh %.2f.\n", x1);
  }
  if (delta < 0){
    printf("nNao existem raizes reais.\n");
  }
  
    
  system("pause");
  return 0;	
}
