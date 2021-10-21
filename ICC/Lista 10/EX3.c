#include<stdlib.h>
#include<stdio.h> 

typedef struct
{
  int idade;
  int CPF[11];
  int RG;
  int numero;
  int telefone;
  float salario;
  char sexo;
  char cargo[20];
  char civil[20];
  
} REGISTRO;

int main()
{
  REGISTRO cadastro[2];
  int i, maioridade=0, rg, encontrei=0;
  char lixo;
  
  printf("              CADASTRO DE FUNCIONARIOS\n\n");
  
  for(i=0; i<2; i++){
           
     printf("Funcionario %d-------------------------------- \n", i+1);
           
     printf("Numero do cadastro: ");
     scanf("%d", &cadastro[i].numero); 
     
     printf("Idade: ");
     scanf("%d", &cadastro[i].idade);
     
     printf("Sexo(F para feminino e M para masculino): ");
     fflush(stdin);
     scanf("%c", &cadastro[i].sexo);
     
     printf("CPF (tudo junto, sem espacos): ");
     scanf("%d", &cadastro[i].CPF);
     
     printf("RG (tudo junto, sem espacos): ");
     scanf("%d", &cadastro[i].RG);
     
     printf("Telefone (tudo junto, sem espacos): ");
     scanf("%d", &cadastro[i].telefone);
     
     printf("Estado Civil: ");
     fflush(stdin);
     gets(cadastro[i].civil); 
     
     printf("Cargo: ");
     fflush(stdin);
     gets(cadastro[i].cargo); 
    
     printf("Valor do salario: RS");
     scanf("%f", &cadastro[i].salario);
      
     lixo=getchar();
     printf("\n");
     
     if(cadastro[i].idade>maioridade)
        maioridade=cadastro[i].idade; 
      
  }

  printf("\n O(s) codigo(s) do(s) funcionario(s) com idade maior: "); 
  for(i=0;i<2;i++) {
     if (maioridade == cadastro[i].idade) 
        printf("\n Codigo: %d", cadastro[i].numero);
  }
  
  printf("\n\n O(s) codigo(s) do(s) funcionario(s) com salario maior que RS1000,00: "); 
  for(i=0;i<2;i++) {
     if (cadastro[i].salario>1000) 
        printf("\n Codigo: %d", cadastro[i].numero);
  }
  
  printf("\n\n O(s) codigo(s) do(s) funcionario(s) masculinos: "); 
  for(i=0;i<2;i++) { 
     if (cadastro[i].sexo == 'M') 
        printf("\n Codigo: %d", cadastro[i].numero);
  } 
  
  printf("\n\nDigite o RG para a busca de um usuario (tudo junto): ");
  scanf("%d", &rg);
  
  for(i=0;i<2;i++) { 
     if (rg == cadastro[i].RG) {
        encontrei=1;
        printf("\nCodigo: %d", cadastro[i].numero);
        break;
     }
  } 
  if(encontrei==0)
     printf("Esse RG nao consta no sistema...\n\n");
  
  
  system("PAUSE");
  return 0;   
    
}
