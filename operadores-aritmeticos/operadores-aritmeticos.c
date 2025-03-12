#include <stdio.h>
#define texto "-----OPERADORES ARITMETICOS-----"
int main(){
	
	int A, B, soma, subtr, mult, divis;
	
	printf("%s\n", texto);
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &A);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("A soma dos dois numeros: %d\n", soma);
	printf("A subtracao dos dois numeros: %d\n", subtr);
	printf("A multiplicacao dos dois numeros: %d\n", mult);
	printf("A divisao dos dois numeros: %d\n", divis);
	
	system("pause");
	return 0;	
}
