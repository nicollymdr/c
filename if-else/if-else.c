#include <stdio.h>
# define texto1 "-----SITUACAO ESCOLAR-----"

int main(){

	float n;
	
	printf("%s\n", texto1);
	
	printf("Insira sua nota: \n");
	scanf("%f", &n);
	
	if(n >= 0.0 && n < 4.0){
		
		printf("REPROVADO!\n");
				
	} else {
		
		printf("APROVADO(A)!\n");
	}
	
	return 0;
}
