#include<stdlib.h>
#include<stdio.h>

 // 1 1 2 3 5 8 13 21 34 55 
 
int calcular_fibonacci(int n)
{
  if (n==1 || n==2){
    return 1;
  }
  return calcular_fibonacci(n-1) + calcular_fibonacci(n-2);   
}
 
int main()
{
  int n, termo;
  
  printf("Insira o termo desejado: ");
  scanf("%d", &n);
  
  termo=calcular_fibonacci(n);
  
  printf("O valor neste termo eh %d .\n",  termo); 
     
  system("PAUSE");
  return 0;   
    
}
