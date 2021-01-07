/* Faça um programa que calcule a soma de duas matrizes*/

#include<stdlib.h>
#include<stdio.h> 

int main()
{
  float m1[3][3], m2[3][3], m3[3][3];
  int i=0, j=0;
  
  printf("Calculo da soma de duas matrizes 3x3. \n\n");
  
  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
       printf("Insira elemento da primeira matriz m(%dx%d): ", i+1, j+1);
       scanf("%f", &m1[i][j]);
    }    
  }
  printf("\nA primeira matriz eh: \n");
    
  for (i=0; i<3; i++) { 
    printf("|");
    for (j=0; j<3; j++)
        printf("%.2f ", m1[i][j]);   
    printf("|\n");    
  }

  printf("\n\n");
  
  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
       printf("Insira elemento da segunda matriz m(%dx%d): ", i+1, j+1);
       scanf("%f", &m2[i][j]);
    }    
  }
  printf("\nA segunda matriz eh: \n");
  
  for (i=0; i<3; i++) { 
     printf("|");
     for (j=0; j<3; j++)
         printf("%.2f ", m2[i][j]);   
     printf("|\n");
  }
  
  printf("\nA matriz resultante da soma entre elas eh: \n");
  
  for (i=0; i<3; i++) { 
     printf("|");
     for (j=0; j<3; j++)
         printf("%.2f ", m3[i][j]=m1[i][j]+m2[i][j]);   
     printf("|\n");
  }
  printf("\n\n");
      
  system("PAUSE");
  return 0;   
    
}
