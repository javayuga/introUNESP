#include<stdlib.h>
#include<stdio.h>

int main()
{
  int alfabeto[26];
  int i=0;
  
  printf("O alfabeto eh: ");
  
  for (i=0; i<26; i++) {
    alfabeto[i] = i+65; // http://www.asciitable.com/
    printf("%c ", (char) alfabeto[i]);
  }
  printf(".");
  printf("\n\n"); 
  
  system("PAUSE");
  return 0;   
}

// Por que na linha 11 somou 65?
