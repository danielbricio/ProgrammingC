
#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int numero = 46;
		
		float valor = 8.37;
		
		char letra = 'D';
		
		int valor1, valor2, valor3;
		
		valor1 = valor2 = valor3 = 0;
		
		printf("\n\n\n\tVariável do tipo Inteiro..........: %d", numero);
		
		printf("\n\n\tVariável do tipo Float............: %.2f ", valor);
		
		printf("\n\n\tVariável do tipo Caractere........:é %c ", letra);
		
		printf("\n\n\t%d %d %d ", valor1, valor2, valor3);
		
		printf("\n\n\n\n\n\t");
		
		return 0;
	}
