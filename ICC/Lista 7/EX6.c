#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int opcao, sair;
  float raio, perimetro, area;
          
  printf("       Escolha uma opcao abaixo: ");
  printf("\n\n1- Calculo da area da circunferencia; \n");
  printf("2- Calculo do volume da circunferencia; \n");
  printf("0- Nao to afim de calcular porcaria nenhuma.\n");
  
  scanf("%d", &opcao);
  
  switch(opcao) {
    case 1:
    printf("\nDigite o raio desejado ");
    scanf("%f", &raio);
    area = 3.1415*pow(raio,2);
    printf("A area eh %.2f\n\n", area); 
    break;
			
    case 2:
    printf("\nDigite o raio desejado ");
    scanf("%f", &raio);  
    perimetro = 2*3.1415*raio;
    printf("\nO perimetro eh %.2f\n\n", perimetro);
    break;
				
    case 0:
    printf("Vlw flw\n");
    sair = 1;
    break;
				
    default:
    printf("Mano... Escolhe qlqr numero da lista ai...\n");	
  }
 
 system("PAUSE"); 
 return 0;   
    
}
