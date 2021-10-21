#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>

int main(int argc, char** argv) {
	int valor, resto;
	int i;
	
	std::string tabs;
	std::string result;
	
	tabs = "";
	
	valor = 2345;
	resto = 0;
	
	printf("Digite o valor desejado em decimal: ");
	scanf("%d", &valor);

	printf("%d | 2 \n", valor);
	
	
	while((valor!=0)){
		resto = (int)valor%2;
		valor = (int)valor/2;
		if (resto==1){
			result = "1" + result;	
		}else{
			result = "0" + result;	
		}
		tabs = tabs + "\t";
		printf("%s Rest: %d %d | 2 \n", tabs.c_str(), resto, valor);
	}

	printf("resultado em binario : %s \n", result.c_str());
	
	
	system("PAUSE");
	return 0;
}
