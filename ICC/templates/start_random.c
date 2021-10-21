#include<stdlib.h>
#include<stdio.h> 
#include<time.h>

int main()
{
	int lim_superior;

	int intervalo_0_x_incluso; 
	int intervalo_0_x_excluso;
	 
	int intervalo_1_x_incluso;
	
  printf("Insira um valor inteiro, positivo e nao nulo para o limite superior : ");
  scanf("%d", &lim_superior);
  
  // atualiza o seed randômico
  srand((unsigned)time(NULL));

	// intervalo começa no zero termina no lim_superior (incluindo ele próprio)
	//	  
  intervalo_0_x_incluso = (rand() % (lim_superior+1));

  printf("valor aleatorio [0, %d] : %d \n", lim_superior, intervalo_0_x_incluso);

	// intervalo começa no zero termina no lim_superior (sem inclui-lo)
	//	  
  intervalo_0_x_incluso = (rand() % lim_superior);

  printf("valor aleatorio [0, %d) : %d \n", lim_superior, intervalo_0_x_incluso);

	// intervalo começa no 1 termina no lim_superior (incluindo ele próprio)
	//
  intervalo_1_x_incluso = (rand() % (lim_superior)) + 1;
  printf("valor aleatorio [1, %d] : %d \n", lim_superior, intervalo_1_x_incluso);

  printf("\n"); 
  
  system("PAUSE");
  return 0;   
    
}
