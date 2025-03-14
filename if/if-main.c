#include <stdio.h>

int main(){
	
	float n;
	
	printf("Insira a sua nota: \n");
	scanf("%f", &n);
	
	if (n >= 4.0 && n < 7.0){
		printf("Tem direito a reprova!\n");
	}
	
	system("pause");	
	return 0;
}
