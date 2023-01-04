#include <stdio.h>
#include <locale.h>


	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int i, numero, soma = 0;
		
		for(i=0;i<10;i++){
			printf("digite o valor: ");
			scanf("%d", &numero);
			soma = soma + numero;
		}
		
		printf("a soma é: %d \n", soma);
		
		system("PAUSE");
		return 0;
	}
