#include<stdlib.h>
#include<stdio.h> 

int sequenciar_fibonacci (int num)
{
  if (num<=1)  
     return num;
   
  else
     return sequenciar_fibonacci(num-1) + sequenciar_fibonacci(num-2);   
   
}

int main()
{
  int termos, i;  
    
  printf("Digite o valor de termos desejados para sequenciar fibonacci: ");
  scanf("%d", &termos);
  
  printf("A sequencia de fibonacci eh: \n");
  
  for(i=0; i<termos ; i++) {
     printf("%d ", sequenciar_fibonacci(i+1));    
  } 
  printf("...");
  printf("\n");
    
  system("PAUSE");
  return 0;  
}



// fibonacci(n)=fibo(n-1) + fibo(n-2) se n>1
// exemplo de seq.: 1, 1, 2, 3, 5, 8...
