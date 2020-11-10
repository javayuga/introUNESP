#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int n=0;
  
  scanf("%d", &n);
  
  switch(n)
  {
    case 7:
      n++; 
    /* n est� armazenado no valor 7, e temos certeza
    que esse case ser� exercutado. Logo, n passar� a 
    armazenar o valor 8. Como esse case n�o � finalizado
    com "break", a execu��o da estrutura deve continuar. */
    case 8:
      printf("%d\n", n);
      n+=2;
    /* Sendo assim, o case 8 tamb�m ser� executado.
    Ap�s a impress�o de n (que nesse momento armazena o
    valor 8, n�s teremos incremento de duas unidades nessa
    vari�vel. Ou seja, agora ela armazena o valor 10. */
    case 10:
      n++;
      break;
    /* Como o case 8 n�o foi encerrado, o programa executar� 
    o case 10, que simplesmente incrementa n em uma unidade, 
    passando a assumir o valor 11. No entanto, � encerrado com
    break. */
    case 11:
      printf("%d\n", n);
      n+=4;
    /* Sendo assim, mesmo que o quarto case seja verdadeiro, 
    uma vez que n assume o valor de 11, o mesmo n�o ser� executado 
    (break). */ 
    case 15:
      printf("%d\n", n);
      break;
  }
  /* Dessa forma, o programa ira apenas apresentar a impress�o de 8 */
  system("PAUSE");
  return 0;   
    
}
