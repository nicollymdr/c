#include <stdio.h>

int main(){
	
	char s[10];

// Comparativo R�pido
//Fun��o	L� espa�os?	         Limita o tamanho?	  Acrescenta \n ao final?	Segura?
//gets()	Sim	                 N�o	              N�o	                    N�o
//puts()	N�o l�, s� imprime	 �	                  Sim	                    Sim
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
