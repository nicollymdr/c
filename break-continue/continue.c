#include <stdio.h>
#define texto "-----Controle de fluxo (continue)-----"

//CONTINUE pula o restante da itera��o atual e vai para a pr�xima.

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
