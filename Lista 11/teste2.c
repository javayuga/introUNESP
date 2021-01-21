#include <stdio.h>                  // Olá, giulia.               
#include <stdlib.h>
#define MAXIMO 20

int main(){ 
    
    int A[5],B[5],i,k=0;
    char c;
    FILE *arq; 
      
    
arq = fopen("arquivo.txt","w+");    
                               
                               for(i=0;i<5;i++){ scanf("%d",&A[i]); fprintf(arq,"%d\n",A[i]); }

fclose(arq);                        // Fechamento do arquivo


arq = fopen("arquivo.txt","r");     // Abertura do arquivo no modo somente leitura
                                
                                i=0;
                                while( ! feof(arq) ){     fscanf(arq,"%d",&B[i]); i++; }

fclose(arq);                        // Fechamento do arquivo



for(i=0;i<5;i++){ if(A[i]!=B[i]){k=1;} }

if(k==0){ printf("\nO VETOR B FOI GRAVADO CORRETAMENTE.");}
else{ printf("\nO VETOR B NAO FOI GRAVADO CORRETAMENTE.");}

printf("\n\n\n");


// EXTRA: MOSTRAR OS VALORES ADICIONADOS AO VETOR B

printf("\nVETOR B\n");

arq = fopen("arquivo.txt","r"); 
   
      c = getc(arq);
      while (!feof(arq)){     printf("%c",c);
                              c = getc(arq);
                                                }
fclose(arq);

printf("\n\n");               

system("pause");                                                                     
return 0;
}
