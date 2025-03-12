#include <stdio.h>
#define texto1 "-------ATRIBUICOES ARITMETICAS-------"
#define texto2 "-------------------------------------"
	
int main(){
	
	int dado;
	
	printf("%s\n", texto1);
	
	printf("Digite um numero: \n");
	scanf("%d", &dado);
	
	dado++;
	printf("Com ++ incremento em 1 unidade: %d\n", dado);
	
	dado--;
	printf("Com -- decremento em 1 unidade: %d\n", dado);
	
	dado += 3;
	printf("Com += incremento generico: %d\n", dado);
	
	dado -= 3;
	printf("Com -= decremento generico: %d\n", dado);
	
	dado *= 10;
	printf("Com *= atribuicao multiplicacao: %d\n", dado);
	
	dado /= 2;
	printf("Com /= atribuicao divisao: %d\n", dado);
	
	printf("%s\n", texto2);
	
	system("pause");
	return 0;
}
