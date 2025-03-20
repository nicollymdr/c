#include <stdio.h>
#define texto "-----Controle de fluxo (continue)-----"

//CONTINUE pula o restante da iteração atual e vai para a próxima.

int main(){
	
	int i;
	
	printf("%s\n", texto);
	
	for(i = 1; i <= 8; i++){
		
		if(i == 5){
			
			printf("O quinto pedaco foi ignorado!\n");
			continue;
			
		}
		
		printf("Voce comeu %d pedacos de pizza.\n",i);
		
	}
	
	return 0;
	
}
