/*------------------- ESTRUTURA DE DADOS --------------------

  As estruturas de dados- structs- são compostas por vetores
de vários tipos. Sabemos que não é possível armazenar diferen-
tes tipos (int e char, por ex) em um vetor só. Dessa maneira, 
criamos uma estrutura que armazenará vários tipos de vetores,
como um menu de restaurante ou um registro de endereço. 
  
  Por exemplo:
      
  struct endereço
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
informações sobre um endereço. Se eu quiser armazenar o ende-
reço de faculdade, devo declarar o uso da struct antes da fun-
ção principal. Assim:
    
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
