#include<stdlib.h>
#include<stdio.h> 

float arctan(float angulo, float delta)
{
	return 0.0;
}

int main()
{
  float angulo, result;
  float delta = 0.0001;
  
  printf("Entre um angulo em radianos (entre 0 e 1) : ");
  scanf("%f", &angulo);  

  result=arctan(angulo, delta);
  
  printf("O resultado eh %.4f: \n\n", result);
  
  system("PAUSE");
  return 0;   
    
}
