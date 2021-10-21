#include<stdio.h>
#include<stdlib.h>

int main()
{
 float nota1, nota2, nota3, nota4, media;
  
  printf("Informe as notas do aluno ");
  scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);
  
  media=(nota1+nota2+nota3+nota4)/4;
  
  if (media<3){
    printf("O conceito desse aluno eh E.\n");          
  }
  else if (media>=3 && media<=5){
    printf("O conceito desse aluno eh D.\n");     
  }
  else if (media>=6 && media<=7){
    printf("O conceito desse aluno eh C.\n");
  }
  else if (media>=8 && media<=9){
    printf("O conceito desse aluno eh B.\n");      
  }
  else {
    printf("O conceito desse aluno eh A.\n");
  }


 system("PAUSE"); 
 return 0;   
    
}
