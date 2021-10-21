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
    /* n está armazenado no valor 7, e temos certeza
    que esse case será exercutado. Logo, n passará a 
    armazenar o valor 8. Como esse case não é finalizado
    com "break", a execução da estrutura deve continuar. */
    case 8:
      printf("%d\n", n);
      n+=2;
    /* Sendo assim, o case 8 também será executado.
    Após a impressão de n (que nesse momento armazena o
    valor 8, nós teremos incremento de duas unidades nessa
    variável. Ou seja, agora ela armazena o valor 10. */
    case 10:
      n++;
      break;
    /* Como o case 8 não foi encerrado, o programa executará 
    o case 10, que simplesmente incrementa n em uma unidade, 
    passando a assumir o valor 11. No entanto, é encerrado com
    break. */
    case 11:
      printf("%d\n", n);
      n+=4;
    /* Sendo assim, mesmo que o quarto case seja verdadeiro, 
    uma vez que n assume o valor de 11, o mesmo não será executado 
    (break). */ 
    case 15:
      printf("%d\n", n);
      break;
  }
  /* Dessa forma, o programa ira apenas apresentar a impressão de 8 */
  system("PAUSE");
  return 0;   
    
}
