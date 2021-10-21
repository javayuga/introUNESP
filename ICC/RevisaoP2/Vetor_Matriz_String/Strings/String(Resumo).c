/*

--------------- STRINGS ------------------

  As strings s�o vetores comuns, mas do tipo 
char. Quando seus elementos s�o organizados,
podem formar palavras.

--------------- LEITURA ------------------

  Diferente da scanf(), a leitura das strings
� feita da seguinte maneira:
  
  int main()
  {
    char string[50];
    
    scanf("%[^\n]*c", string);
    
    system("PAUSE");
    return 0;
  }

  O primeiro par�metro implique que a fun��o
de leitura deve ser feita para todos os carac-
teres (incluindo espa�os em branco) at� encon-
trar um \n (usu�rio aperta enter).

  Lembrando que esse vetor tem tamanho 50. Se
o usu�rio extrapolar esse limite, dizemos que
um overflow aconteceu.

  Mas, quando o usu�rio coloca menos caracteres
que o limite, a fun��o de leitura protege o pro-
grama dos lixos de mem�ria quando um terminador
de string � adicionado. Isso significa que tudo
que for lido ap�s o terminador, \0, ser� ignora-
do.

----------------- IMPRESS�O ------------------

  A �nica diferen�a para a string � que a sua im-
press�o utiliza o %s. Assim:
        
  int main()
  {
    printf("%s", nome do vetor);
  
  }
  
  Tudo aquilo antes do \0 ser� impresso.
*/
