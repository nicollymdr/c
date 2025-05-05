#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[30], nome2[30];
	char saudacao[50] = "Bem vindo, ";
	
	printf("Digite o primeiro nome: \n");
	fgets(nome1, 30, stdin);
	fflush(stdin);
	
	printf("Digite o segundo nome: \n");
	fgets(nome2, 30, stdin);
	fflush(stdin);
	
	printf("\nTamanho do nome 1: %lu caracteres\n", strlen(nome1));
	printf("\nTamanho do nome 2: %lu caracteres\n", strlen(nome2));
	
	if(strcmp(nome1, nome2) == 0){
		printf("Os nomes são iguais!\n");
	} else {
		printf("Os nomes são diferentes!\n");	
	}
	
	strcat(saudacao, nome1);
	puts(saudacao);
	
	system("pause");
	return 0;
}
