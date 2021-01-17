#include <stdio.h>
#include <stdlib.h>

int main()
{  
 int i=0, n=0, numeros[50];

 printf("Qual a quantidade de elementos na sequencia?");
 scanf("%d", &n);
 
 printf("\nAgora, insira os elementos da sequencia:  \n");
  
 for(i=1;i<=n;i++){
    printf("Elemento[%d]= ", i);
    scanf("%d",&numeros[i]);
 }
 printf("\nEssa sequencia na ordem inversa eh: \n");
 
 for(i=n;i>=1;i--)
    printf("%d\n",numeros[i]);
 
 system("PAUSE");
 return 0;
}
