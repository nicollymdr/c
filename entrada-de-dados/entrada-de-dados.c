#include <stdio.h>

int main(){
	
	int idade;
	float peso;
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	printf("Digite seu peso: \n");
	scanf("%f", &peso);
	
	printf("Sua idade: %d\n", idade);
	printf("Seu peso: %.1f\n", peso);
	
	system("pause");
	
	return 0;
}
