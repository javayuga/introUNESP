#include<stdlib.h>
#include<stdio.h> 

int main()
{
  int A[256], B[256], m, n=0, i;
  char c;
  FILE *arquivo;
  
  printf("Digite quantos valores inteiros deseja armazenar: ");
  scanf("%d", &m);
  
  printf("Ok, agora digite os valores: \n");
  
  arquivo=fopen("texto.txt", "w+");
  
  for(i=0;i<m;i++)
  {  
     scanf("%d", &A[i]);
     fprintf(arquivo, "%d\n", A[i]);                                
  }
  
  fclose(arquivo);
  
  arquivo=fopen("texto.txt", "r");
  i=0;
  
  while(!feof(arquivo)) {
      fscanf(arquivo,"%d",&B[i]); 
      i++;                  
  }
 
  fclose(arquivo);
  
  for(i=0;i<m;i++) {
     if(A[i]!=B[i]){
        n=1;        
     }         
  }
  if(n==0)
     printf("\nO vetor B foi gravado corretamente :)\n");
  else
     printf("\nO vetor B nao foi gravado\n");
     
  printf("\n\nO vetor B eh: \n");
  
  arquivo=fopen("texto.txt", "r"); 
  c = getc(arquivo);
  
  while (!feof(arquivo)) {     
     printf("%c",c);
     c = getc(arquivo);
  }
  fclose(arquivo);

  printf("\n\n");               
  
  system("PAUSE");
  return 0;   
    
}
