#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int dado_1, dado_2, placar_1=0, placar_2=0;
	
	srand((unsigned)time(NULL));
	
	while(placar_1 < 11 && placar_2 < 11) {
         dado_1 = (rand() % 6)+1 ;
         dado_2 = (rand() % 6)+1 ;
         printf("Dado 1= %d e Dado 2= %d.\n", dado_1, dado_2);
         
         if (dado_1 > dado_2) {
                   placar_1 ++;
                   printf("O jogador 1 ganhou 1 ponto. Seu placar eh: %d :) \n\n", placar_1);
                   }
         else if (dado_1 < dado_2) {
                   placar_2 ++;
                   printf("O jogador 2 ganhou 1 ponto. Seu placar eh: %d :) \n\n", placar_2);
                   }			
         else {
              printf("Ninguem ganhou pontos :( \n\n");
              }		
   }
	if (placar_1 == 11) {
          printf("\n\nO jogador 1 ganhou!!! \n");     
          }
    else {
          printf("\n\nO jogador 2 ganhou!!! \n"); 
          } 
    system("PAUSE");
    return 0;
}


