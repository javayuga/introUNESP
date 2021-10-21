#include<stdlib.h>
#include<stdio.h> 
/* Um n´umero perfeito ´e um numero inteiro cuja soma de seus divisores,
exceto ele pr´oprio, ´e igual a ele mesmo, por exemplo, 6 = 1 + 2 + 3.
Implemente um programa que verifica se um dado n ? Z ´e perfeito. */

int main()
{
  int i, num, soma=0;
  
  printf("Digite um numero inteiro: ");
  scanf("%d", &num);
  
  for(i=1; i<num; i++){
    if(i%num==0)
    soma += i;
    }
  if(soma==num)
    printf("Esse numero eh perfeito.\n\n");
  else
    printf("Esse numero nao eh perfeito.\n\n");  
   
 
  system("PAUSE");
  return 0;   
    
}
