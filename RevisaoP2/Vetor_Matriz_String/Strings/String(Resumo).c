/*

--------------- STRINGS ------------------

  As strings são vetores comuns, mas do tipo 
char. Quando seus elementos são organizados,
podem formar palavras.

--------------- LEITURA ------------------

  Diferente da scanf(), a leitura das strings
é feita da seguinte maneira:
  
  int main()
  {
    char string[50];
    
    scanf("%[^\n]*c", string);
    
    system("PAUSE");
    return 0;
  }

  O primeiro parâmetro implique que a função
de leitura deve ser feita para todos os carac-
teres (incluindo espaços em branco) até encon-
trar um \n (usuário aperta enter).

  Lembrando que esse vetor tem tamanho 50. Se
o usuário extrapolar esse limite, dizemos que
um overflow aconteceu.

  Mas, quando o usuário coloca menos caracteres
que o limite, a função de leitura protege o pro-
grama dos lixos de memória quando um terminador
de string é adicionado. Isso significa que tudo
que for lido após o terminador, \0, será ignora-
do.

----------------- IMPRESSÃO ------------------

  A única diferença para a string é que a sua im-
pressão utiliza o %s. Assim:
        
  int main()
  {
    printf("%s", nome do vetor);
  
  }
  
  Tudo aquilo antes do \0 será impresso.
*/
