#include <stdio.h>
#include <locale.h>

	int main(){
		
		char nome[80];
		
		printf("Digite um nome: ");
		gets(nome);
		
		printf("Nome digitado: %s ", nome);
		
		
		return 0;
	}
