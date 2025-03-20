#include <stdio.h>
# define texto "-----Controle de Fluxo (break)-----"

//BREAK Sai completamente do loop.

int main(){
	
	int i;
	
	printf("%s\n", texto);
	
	for(i = 1; i <= 8; i++){
		
		printf("Voce comeu %d pedacos de pizza.\n",i);
		
		if(i == 5){
			break;
		}
	}
	
	system("pause");
	return 0;
}
