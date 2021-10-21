#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char nome [60];
	float potencia, tempo;
	
} eletrodom;


int main()
{
  eletrodom eletro[2];
	int i;
	char lixo;
	
	for(i = 0; i < 2; i++)
	{
     printf("Informe o dome do %dro eletrodomestico: ", i+1);
     gets(eletro[i].nome);
     
     printf("Digite a potencia dele em kW: ");
     scanf("%f", &eletro[i].potencia);
     
     printf("Agora, informe o tempo ativo por dia (em horas): ");
     scanf("%f", &eletro[i].tempo);
     printf("\n");
     
     lixo=getchar();
	}
	
	printf("---x ELETRODOMESTICOS x---\n\n");
	for(i=0; i<2; i++) {   
    printf("Eletrodomestico %d:\n", i+1);   
	  printf("Nome....... %s \n", eletro[i].nome);
	  printf("Potência....... %.2f \n", eletro[i].potencia);
	  printf("Tempo de Funcionamento....... %.2f \n", eletro[i].tempo);
	  printf("\n");
  }
	
	
  system("PAUSE");
  return 0;
	
}
