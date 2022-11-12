#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL,"Portuguese");
		
		int num1, num2, xis;
		
		printf("Escreva o numero 1: \n");
		scanf("%d", &num1);
		
		printf("Escreva o numero 2: \n");
		scanf("%d", &num2);
		
		xis = num1 + num2;
		
		printf("A soma dos números é: %d \n", xis);
		
		printf("\n\n\n\t%d + %d = %d\n\n", num1, num2, xis);
		
		
		return 0;
	}
