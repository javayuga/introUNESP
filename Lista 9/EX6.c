#include<stdlib.h>
#include<stdio.h> 

void imprimir_vetor(int *vetor, int tamanho) {
 
 int i;
 
 printf("{");
 for (i=0;i<tamanho;i++) {
    if (vetor[i]==-1)
       break;
       
    printf("%d", vetor[i]); 
    
    if (i!=tamanho-1 && vetor[i+1]!=-1) 
       printf(",");      
 }   
 printf("}");   
}

void shift_right(int *vetor, int tamanho, int posicao) {

  int i;
  
  for(i=tamanho-1;i>posicao;i--){
     vetor[i]=vetor[i-1];
  }
}

void ordenar_vetor(int *ordenado, int *o1) {
 
  int i, j;
 
  for(i=0;i<5;i++){
     for(j=0;j<10;j++) {
        if (ordenado[j]==-1) {
           ordenado[j]=o1[i]; 
           break;
        }
        if (ordenado[j]>o1[i]){
           shift_right(ordenado, 10, j);  
           ordenado[j] = o1[i];
           break;
        }
        if (ordenado[j]==o1[i]) 
           break; 
     }         
  } 
}
void entrar_sequencia(int *o1) {
  
  int i;

  for (i=0;i<5;i++){
     printf("Informe o %dro valor: ", i+1);
     scanf("%d", &o1[i]);
  }
  printf("o= ");
  imprimir_vetor(o1, 5);
  printf("\n\n");
      
}

int main()
{
  int o1[5];
  int o2[5];
  int ordenado[10];
  int m, n, i, j;
  
  printf("Entre com 5 valores para a primeira sequencia (o1): \n");
  entrar_sequencia(o1);
  
  printf("Entre com 5 valores para a segunda sequencia (o2): \n");
  entrar_sequencia(o2);
  
  for (i=0;i<10;i++) {
     ordenado[i]=-1;   
  }
  
  ordenar_vetor(ordenado, o1);
  ordenar_vetor(ordenado, o2);
  
  printf("O vetor ordenado a partir de o1 e o2 eh: \n");
  
  imprimir_vetor(ordenado, 10);
  
  printf("\n\n");
  system("PAUSE");
  return 0;   
    
}
