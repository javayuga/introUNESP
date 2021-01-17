/*------------------- ESTRUTURA DE DADOS --------------------

  As estruturas de dados- structs- s�o compostas por vetores
de v�rios tipos. Sabemos que n�o � poss�vel armazenar diferen-
tes tipos (int e char, por ex) em um vetor s�. Dessa maneira, 
criamos uma estrutura que armazenar� v�rios tipos de vetores,
como um menu de restaurante ou um registro de endere�o. 
  
  Por exemplo:
      
  struct endere�o
  {
   char rua[100];
   char bairro[100];
   char cidade[100];
   char estado [100];
   int numero[100];
   int cep[100];      
  }
  
  int main()
  {
      
  }

  No exemplo acima, criamos uma estrutura base para armazenar
informa��es sobre um endere�o. Se eu quiser armazenar o ende-
re�o de faculdade, devo declarar o uso da struct antes da fun-
��o principal. Assim:
    
  struct endereco
  {
   char rua[100];
   char bairro[100];
   char cidade[100];
   char estado [100];
   int numero[100];
   int cep[100];      
  }
  
  typedef struct endereco ed_facul;
  
  int main()
  {
      
  }
    
    












*/
