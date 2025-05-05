#include <stdio.h>

int main(){
	
	char s[10];

// Comparativo Rápido
//Função	Lê espaços?	         Limita o tamanho?	  Acrescenta \n ao final?	Segura?
//gets()	Sim	                 Não	              Não	                    Não
//puts()	Não lê, só imprime	 –	                  Sim	                    Sim
//fgets()	Sim	                 Sim	              Sim (pode incluir)	    Sim

	
	printf("Digite algo(fgets):\n");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	gets("Digite algo(gets):\n");
	gets(s);
	fflush(stdin);
	
	ptintf("Digite algo(puts):\n");
	puts(s);
	fflush(stdin);
			
	system("pause");
}
