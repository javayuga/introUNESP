#include<stdio.h>
#include<stdlib.h>


int main()
{
  float nota;
  
  printf("Informe a nota do aluno ");
  scanf("%f", &nota);
  
  if (nota<3){
    printf("O conceito desse aluno eh E.\n");          
  }
  else if (nota>=3 && nota<=5){
    printf("O conceito desse aluno eh D.\n");     
  }
  else if (nota>=6 && nota<=7){
    printf("O conceito desse aluno eh C.\n");
  }
  else if (nota>=8 && nota<=9){
    printf("O conceito desse aluno eh B.\n");      
  }
  else {
    printf("O conceito desse aluno eh A.\n");
  }
  
 system("PAUSE"); 
 return 0;   
    
}
