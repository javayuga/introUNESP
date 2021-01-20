#include<stdlib.h>
#include<stdio.h>

typedef struct
{
  char nome[15];
  int potencia;
  float tempoativo;
  
} ELETRO;

int main()
{
  ELETRO eledom[5];
  int i;
  char lixo;
  float gasto=0;
  
  for(i=0; i<5; i++){
     printf("Informe o dome do %dro eletrodomestico: ", i+1);
     gets(eledom[i].nome);
     
     printf("Digite a potencia dele em kW: ");
     scanf("%d", &eledom[i].potencia);
     
     printf("Agora, informe o tempo ativo por dia (em horas): ");
     scanf("%f", &eledom[i].tempoativo);
     printf("\n");
     
     lixo=getchar();
     gasto += eledom[i].potencia * eledom[i].tempoativo;
     
  }
  
  printf("Consumo da casa por dia: %.2f.\n", gasto);
  for(i=0; i<5; i++)
     printf("%s.......%.2f%%\n", eledom[i].nome, (eledom[i].potencia * eledom[i].tempoativo)/gasto*100 );
   
  
  system("PAUSE");
  return 0;   
    
}
