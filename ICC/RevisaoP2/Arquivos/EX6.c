#include<stdlib.h>
#include<stdio.h> 

typedef struct 
{
  char nome[256];
  int idade;      
} info;

int main()
{ 
  info usuario[5];
  
  int dia, mes, ano, i=0;
  char lixo, nome[256];
  FILE* arquivo;
  
  for (i=0; i<2; i++){
      
     printf("%d-\n", i+1);
     
     printf("Informe os dois primeiros nomes: ");
     fflush(stdin);
     gets(usuario[i].nome); 
     
     printf("Informe o dia do nascimento: ");
     scanf("%d", &dia);
     
     printf("Informe o mes do nascimento: ");
     scanf("%d", &mes);
     
     printf("Informe o ano do nascimento: ");
     scanf("%d", &ano);
     
     printf("Agora, a sua idade: ");
     scanf("%d", &usuario[i].idade);
     
     lixo=getchar();
  }
  
  arquivo=fopen("arq.txt", "w+");
  
  while(fscanf(arquivo, "%s, %d/%d/%d", usuario[i].nome, &dia, &mes, &ano)!= EOF){
     strcpy(usuario[i].nome, nome);
     i++;
  }
  
  fclose(arquivo);
  
  for(i=0; i<2; i++){
     printf("\n%s, %d anos", usuario[i].nome, usuario[i].idade);         
  }
  
  printf("\n\n");
  
  system("PAUSE");
  return 0;   
    
}
