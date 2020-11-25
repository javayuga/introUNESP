#include<stdlib.h>
#include<stdio.h> 
#include <stdbool.h> //usar o tipo booleano -> true or false

typedef struct Data{
	int ano;
	int mes;
	int dia;
	
	bool erro;  // struct linhas/colunas
	char *msg;  // ponteiro (*) -> indica p/ começo do  vetor (matriz de 1 dimensão-> sequencia de valores)
};

bool checa_bissexto(int ano){
	return (ano%400==0 || (ano%4==0 && ano%100!=0)); 
}

struct Data incrementa_dia(struct Data ent){
	struct Data saida;

	saida.erro = false;
	
	saida.ano = ent.ano;
	saida.mes = ent.mes;
	saida.dia = ent.dia;
	
	if ((ent.ano<1)||(ent.ano>2100)){
		saida.erro = true;
		saida.msg ="ano deve ser entre 1 e 2100";
		return saida;
	}
	
	if ((ent.mes<1)||(ent.mes>12)){
		saida.erro = true;
		saida.msg ="mes deve ser entre 1 e 12";
		return saida;
	}

	if (ent.mes==2){
		if (checa_bissexto(ent.ano)){
			if ((ent.dia<1)||(ent.dia>29)){
				saida.erro = true;
				saida.msg ="Os dias no mes de fev em ano bissexto devem ser entre 1 e 29";
				return saida;
			}
			if (ent.dia==29){
				saida.dia = 1;
				saida.mes = 3;
				saida.ano = saida.ano;
				
			}else{
				saida.dia = saida.dia+1;
				saida.mes = saida.mes;
				saida.ano = saida.ano;
				
			}
			
		}else{
			if ((ent.dia<1)||(ent.dia>28)){
				saida.erro = true;
				saida.msg ="Os dias no mes de fev en ano nao bissexto devem ser entre 1 e 28";
				return saida;
			}
			if (ent.dia==28){
				saida.dia = 1;
				saida.mes = 3;
				saida.ano = saida.ano;
				
			}else{
				saida.dia = saida.dia+1;
				saida.mes = saida.mes;
				saida.ano = saida.ano;
				
			}
			
		}
		
		
	}else	if ((ent.mes==1)||
						(ent.mes==3)||
						(ent.mes==5)||
						(ent.mes==7)||
						(ent.mes==8)||
						(ent.mes==10)||
						(ent.mes==12)){
		if ((ent.dia<1)||(ent.dia>31)){
			saida.erro = true;
			saida.msg ="Os dias nos meses de jan, mar, mai, jul, ago, out, dez devem ser entre 1 e 31";
			return saida;

		}
		if (ent.dia==31){
			if (ent.mes==12){
				saida.dia = 1;
				saida.mes = 1;
				saida.ano = saida.ano+1;
				
			}else{
				saida.dia = 1;
				saida.mes = saida.mes+1;
				saida.ano = saida.ano;
				
			}

		}else{
			saida.dia = ent.dia+1;
			saida.mes = ent.mes;
			saida.ano = ent.ano;

		}
				
	} else {
		if ((ent.dia<1)||(ent.dia>30)){
			saida.erro = true;
			saida.msg ="Os dias nos meses de abr, jun, set, nov devem ser entre 1 e 30";
			return saida;

		}
		if (ent.dia==30){
			saida.dia = 1;
			saida.mes = saida.mes+1;
			saida.ano = saida.ano;
			
		}else{
			saida.dia = ent.dia+1;
			saida.mes = ent.mes;
			saida.ano = ent.ano;

		}
	
	}
	
	
	return saida;
}


int main()
{
	struct Data entrada;
	struct Data incrementada;
	
	printf("A data deve ser entrada no formato (dd-mm-yyyy) (e.g. 29-10-1973, 29-02-2000...) \n");
	printf("Por favor, entre a data : ");
	scanf("%d-%d-%d", &entrada.dia, &entrada.mes, &entrada.ano);
	
	incrementada = incrementa_dia(entrada);
	
	if (!incrementada.erro){
		printf("O dia seguinte a %02d-%02d-%03d eh %02d-%02d-%04d \n \n",
			entrada.dia, entrada.mes, entrada.ano,
			incrementada.dia, incrementada.mes, incrementada.ano);
			
  }else{
		printf("erro na data \n%s \n \n", incrementada.msg);
  	
	}
	
  system("PAUSE");
  return 0;   
    
}
