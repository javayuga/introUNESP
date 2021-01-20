#include<stdlib.h>
#include<stdio.h> 

void imprimir_vetor(int *vetor, int tamanho) {
 
 int i;
 
 printf("{");
 for (i=0;i<tamanho;i++) {
    printf("%d", vetor[i]); 
    if (i!=tamanho-1)   
       printf(","); 
 }   
 printf("}");   
}

void right_shift(int *vetor, int tamanho, int posicao) {

  int i;
  
  for(i=tamanho-1;i>posicao;i--){
     vetor[i]=vetor[i-1];
  }
}
 
int main()
{
  int o1[5];
 // int o2[5];
  int ordenado[10];
  int m, n, i, j;
  
  printf("Entre com 5 valores para uma sequencia: ");
  
  for (i=0;i<5;i++){
     printf("Informe o %dro valor da sequencia: ", i+1);
     scanf("%d", &o1[i]);
  }
  printf("o1= ");
  imprimir_vetor(o1, 5);
  printf("\n\n");
  
  
  /*printf("Tamanho da segunda sequencia de 5 numeros inteiros: ");
  scanf("%d", &n);
  if (n>5) {
     printf("Ultrapassou valor limite...\n\n");
     
     system("PAUSE");
     return 0;
  }
  
  for (i=0;i<n;i++){
     printf("Informe o %dro valor da sequencia: ", i+1);
     scanf("%d", &o2[i]);
  }
  printf("o2= ");
  imprimir_vetor(o2, n);
  
  */
  for (i=0;i<10;i++) {
     ordenado[i]=-1;   
  }
  
  for(i=0;i<5;i++){
     for(j=0;j<10;j++) {
        if (ordenado[j]==-1) {
           ordenado[j]=o1[i]; 
           break;
        }
        if (ordenado[j]>o1[i]){
           right_shift(ordenado, 10, j);
           ordenado[j] = o1[i];
           break;
        }
        if (ordenado[j]==o1[i]) 
           break; 
     }
                
  }
  
  

  system("PAUSE");
  return 0;   
    
}
