#include<stdlib.h>
#include<stdio.h> 
#include<math.h>

typedef struct Ponto{
	float x;
	float y;
};


float calcula_distancia(struct Ponto centro, struct Ponto perif){
	return sqrt(pow((perif.x-centro.x),2)+pow((perif.y-centro.y),2));
}

int main()
{
	int i, n;
	float raio;
	struct Ponto centro;
	struct Ponto perif;

	printf("Digite a coordenada x do ponto central: ");
	scanf("%f",&centro.x);
	printf("Digite a coordenada y do ponto central: ");
	scanf("%f",&centro.y);
	printf("Ponto central eh (%.4f,%.4f) \n", centro.x, centro.y);

	printf("\nDigite quantos pontos na periferia: ");
	scanf("%d",&n);
	
	printf("\n");

	for(i=0;i<n;i++){
		printf("Digite a coordenada x do ponto %i : ", i);
		scanf("%f",&perif.x);
		printf("Digite a coordenada y do ponto %i : ", i);
		scanf("%f",&perif.y);
		
		raio = calcula_distancia(centro, perif);
		printf("a distancia entre o centro eh a periferia eh %.4f ", raio);
		printf("\na equacao do circulo eh (x - %.4f)^2 + (x - %.4f)^2 = %.4f ", centro.x, centro.y, raio*raio);
		
		printf("\n");
			
	}


	
  return 0;   
    
}
