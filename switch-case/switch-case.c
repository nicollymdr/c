#include <stdio.h>
#define texto1 "-----ESTRUTURA DE DECISAO-----"

int main(){

	int n;
	
	printf("%s\n", &texto1);
	
	printf("Insira um valor de 1 a 7: \n");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			printf("Domingo.\n");
			break;
		case 2:
			printf("Segunda-feira.\n");
			break;
		case 3:
			printf("Terca-feira.\n");
			break;
		case 4:
			printf("Quarta-feira.\n");
			break;
		case 5:
			printf("Quinta-feira.\n");
			break;
		case 6:
			printf("Sexta-feira.\n");
			break;
		case 7:
			printf("Sabado.\n");
			break;
		default:
			printf("Valor invalido.\n");
			break;
	}
	
	system("pause");
	return 0;
}
