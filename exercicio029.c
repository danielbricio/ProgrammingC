#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
			int numero, qtdDigitada;
			
			while (numero >=0){
				printf("Digite um numero: ");
				scanf("%d", &numero);
				qtdDigitada++;
			}
			
			printf("A quantidade digitada é:  %d ", qtdDigitada);
	
		return 0;
	}
