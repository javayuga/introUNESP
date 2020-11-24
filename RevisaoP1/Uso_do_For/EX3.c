#include<stdlib.h>
#include<stdio.h> 
#include<math.h>

int main()
{
  int x, y, z;
    
  printf("Informe os valores de x e y: ");
  scanf("%f%f", &x, &y);
  
  z=pow(x,y);
  
  printf("O valor de x elevado a y eh %d\n\n", z);
      
  system("PAUSE");
  return 0;   
    
}
