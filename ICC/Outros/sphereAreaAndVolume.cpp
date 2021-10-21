#include <stdio.h>
#include <stdlib.h>

int main()
{
 float raio, area, volume;
 float pi=3.1415;
 
 printf("Digite o raio desejado (m): ");
 scanf("%f", &raio);
 
 area = pi*raio*raio;
 volume = (4*pi*raio*raio*raio)/3.0;
 
 printf("\nA area e o volume sao, respectivamente: %f (m2) e %f (m3).\n\n", area, volume);
 system("PAUSE");
 return 0;   
}
