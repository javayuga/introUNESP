#include <stdio.h>
#include<stdlib.h>

int dia,mes,mesmax=12,ano,diamax,anobi;

  int proximodia(dia){
    if (dia<diamax){
      dia=dia+1;
    }                                             
    else if(dia=diamax) {
      dia=1;
      mes=proximomes(mes);
    }
    else {
      printf ("O numero digitado nao eh um dia suportavel");
    }
  return (dia);
}

int proximomes(mes){
  int proximoano(ano)                   // CONFERIR INDENTAÇÃO
  {
 
  ano=ano+1;
  return (ano);
  }

  mes=mes+1;
  if(mes>=mesmax) {
     mes=1;
     ano=proximoano(ano);
  }

  return (mes);
}

int conferirano(ano){

  if (ano%400==0){
     anobi=1;
  }
  else {
     if (ano%100==0){
     anobi=0;
     }
  else {
     if (ano%4==0){
     anobi=1;
  }
  else {
     anobi=0;
  }   
        }

    }
  return (anobi);
}
int conferirmes(mes){
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes== 8 || mes==10 || mes==11 ){
        diamax=31;
    }
    else if (mes==2){
        if (anobi=0){
            diamax=28;
        }
        else{
            diamax=29;
        }
    }
    else {
        diamax=30;
    }
    
return (diamax);
}

  int main (){

  printf ("Digite a data (Ex: 25/12/1995 = dd/mm/aaaa): ");
  scanf("%d/%d/%d",&dia,&mes,&ano);
    anobi=conferirano(ano);
    //printf("Anobi: %d\n",anobi);
    diamax=conferirmes(mes);
    dia=proximodia(dia);
    //printf("DiaMax: %d\n Dia:%d\n",diamax,dia);
    printf("\nSeu proximo dia eh: %d/%d/%d\n\n",dia,mes,ano);




  system("PAUSE");
  return (0);
}
