/*
--------------VETORES----------------------

  Por analogia, os vetores s�o como uma
prateleira de livros: eles podem armaze-
nar in�meros dados computacionais (desde
que sejam do mesmo tipo).
  Quando declaramos um vetor, estamos re-
servando um bloco sequencial de mem�ria 
para armazenar dados. Por exemplo:
     
       \ 7 \ 9 \ 85 \ 36 \ 17 \
       
         0    1    2    3    4
         
  O vetor acima possui 5 elementos, todos 
do tipo inteiro (int), e podemos cham�-lo
de vetor n�meros, pois � um nome que se 
relaciona com o tipo de dados que ele arma-
zena.
  A vantagem de utilizar um vetor est� na 
facilidade de trabalhar com uma referencia-
��o capaz de guardar 100 dados, ao inv�s de 
100 vari�veis que guardam 1 dado.

----------- CRIANDO UM VETOR---------------

  1. A primeira coisa a se fazer quando de-
  claramos um vetor � identificar qual tipo
  de dado estamos armazenando (int, char,
  float...);
  2. Depois, devemos decidir o nome do vetor,
  o qual deve estar relacionado com os seus
  dados;
  3. Assim, devemos falar a capacidade m�xima
  de dados que o vetor ir� suportar.


  int main()
  {
    tipo + nome [qntd de elementos];    
  }

---------- MANIPULA��O DE VETORES ----------

  Tendo o vetor abaixo como exemplo:
         \ A \ B \ C \ D \ E \
  Sabemos que ele tem 5 elementos. Mas, se eu 
quiser acessar apenas o elemento C (2da casa),
como faria?
  O �ndice dos vetores come�a em 0 e vai at� 
n-1 (sendo n o tamanho do vetor). Dessa forma,
conhecendo o �ndice do elemento que desejo, adoto
o seguinte:
            printf("%d", numeros[2]);
  Assim, "chamei" o elemento que preenche o corres
pondente de 2.

                 letras [0] = 'A';
                 letras [1] = 'B';
                 letras [2] = 'C';
                 letras [3] = 'D';
                 letras [4] = 'E';
                 
--------- OPERA��ES COM VETORES -----------------

  Apesar de ter uma nota��o diferente, manipular um elemnto 
 espec�fico de um vetor n�o � muito diferente de manipu-
 las uma vari�vel. Por exemplo:
     
 int main()
 { 
   int numeros[4];
   int x=0;
   
   numeros[0] = 70;
   numeros[1] = 95;
   numeros[2] = 48;
   numeros[3] = 76;
   
   IMPRESS�O
   printf("%d", numeros[2]);
   
   OPERA��O
   x= numeros[1] + numeros[2];
   
   ATRIBUI��O
   x= numeros[3];
   
   CONDI��O
   if(x<numeros[2])
     
   system("PAUSE");
   return 0;    
     
 }
      
    

     

  








*/
