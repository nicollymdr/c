#include <stdio.h>
#define texto "-----ENTRADA E SAIDA DE DADOS-----"

int main(){
	
	int idade = 0;
	float altura = 0;
	char nome[50] = "";
	
	printf("%s\n", texto);
	
	printf("Digite a idade: \n");
	scanf("%d", &idade);
	
	printf("Digite a altura: \n");
	scanf("%f", &altura);
	
	printf("Digite o nome: \n");
	scanf("%s", nome);
	
	printf("-----DADOS INFORMADOS-----\n");
	
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);
	printf("Nome; %s\n", nome);
	
	system("pause");
	
	return 0;
}
