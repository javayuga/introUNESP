/*

----Modulariza��o de Programas------

  Em C, algumas fun��es j� s�o pr� defi-
das:
    *pow(x,2) -> quadrado de x
    *sqrt(x)  -> raiz quadrada de x
    *sin(x)   -> seno de x
  Nesses exemplos, pow, sqrt e sin s�o os
identificadores da fun��o. J� o x e 2 s�o 
par�metros formais da fun��o.
  Quando precisamos criar nossas pr�prias
fun��es, devemos seguir os passos utili-
zados nas pr�-definidas. Por exemplo:
  
  Quero fazer uma fun��o que leia um in-
teiro x multiplique-o por um valor f (o
qual come�a em 1). Essa fun��o correspon-
de a um calculo de fatorial.  Assim:
     
     inteiro fat(inteiro x)
     inicio
     inteiro i, f=1;
     para i=x at� 1 fa�a
       f=f*i;
     fim-para;
     
     retorna (f);
     
  Traduzindo para a linguagem, temos que:
             
     int fat(int x) {
     
       for (i=x; i>1; i--)
         f=f*i;
       }
       return f;
     }

  Outro exemplo: Dados dois n�meros N e K,
calcular a combina��o Cn,k (fatorial).

     inteiro fat (inteiro x)    \
     in�cio                     \
       inteiro i, f=1;          \ Nesse cam-
     para i=x at� 1 fa�a        \po, criamos 
       f=f*i;                   \a fun��o fat,
     fim-para;                  \sendo que cal-
                                \cula o fatorial.
     retorna (f);               \
     
     in�cio                     \
       inteiro n, k, c;         \ Aqui, temos o
       leia(n,k);               \algor�tmo prin-
       c=fat(n)/fat(k)*fat(n-k) \cipal. Nele, cha-
       escreva c;               \mamos a fun��o fat.
     fim.                       \

  Traduzindo, temos:
              
#include<stdio.h>
#include<stdlib.h>

int fat (int x){
    int i,f=1;
    for(i=x;i>1;i--){
    f=f*i;
    }
 return f;
}

int main(){
    int n,k;
    float c;
    
    printf(�FORNECA O VALOR DE N: �); scanf(�%d�,&n);
    printf(�FORNECA O VALOR DE K: �); scanf(�%d�,&k);
    
    c= (float) fat(n)/(fat(k)*fat(n-k));

     printf(�C(%d,%d)=%.2f�,n,k,c);
     
return 0;
}
       
****Resumindo, criamos o template para criar fun��es:
  
  tipo nome(declara��o dos parametros)  

{
  instru��es   // espa�o para implementar a fun��o (contrato)
              // tipo: sa�da (float, int, void...)     
}

obs -> nome: verbo+substantivo e parametro: entrada do usuario   
    -> void nao retorna nada

  Fun��es retornam um resultado que deve ser do mesmo tipo
para o qual a fun��o foi declarada anteriormente.

   <tipo_retornado> <nome_fun��o>(<lista_dos_parametos>)
   int fatorial (int n)
   
  O Comando return � respons�vel por encerrar a execu��o da
fun��o e retornar o valor daquele tipo.
  
  return result

*/
