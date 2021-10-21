#include<stdlib.h>
#include<stdio.h> 

int main()
{
  char nomeArq1[256];
  char nomeArq2[256];
  char caractere;
  
  FILE* arq1;
  FILE* arq2;
  FILE* arq3;
  
  printf("Digite o nome do primeiro arquivo: ");
  scanf("%[^\n]%*c", &nomeArq1);
  
  printf("Agora, o nome do segundo arquivo: ");
  scanf("%[^\n]", &nomeArq2);
  
  arq1=fopen(nomeArq1, "r");
  arq3=fopen("arq3.txt", "w");
  
  while(fscanf(arq1, "%c", &caractere)!=EOF){
     fprintf(arq3, "%c", caractere);
  }
  fclose(arq1);
  
  arq2=fopen(nomeArq2, "r");
  
  while(fscanf(arq2, "%c", &caractere)!=EOF){
     fprintf(arq3, "%c", caractere);
  }  
  fclose(arq2);
  fclose(arq3);
  
  
  system("PAUSE");
  return 0;   
    
}
