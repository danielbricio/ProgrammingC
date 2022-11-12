#include <stdio.h>
#include <locale.h>

	int main (){
		
		setlocale(LC_ALL, "Portuguese");
		
		//OPERADORES ARITMÉTICOS
		
		int num1, num2, x;
		
		printf("Digite um numero: ");
		scanf("%d", &num1);
		
		printf("Digite outro numero: ");
		scanf("%d", &num2);
		
		x = num1 + num2;
		printf("\tA soma de %d + %d é %d\n\n", num1, num2, x);
		
		x = num1 - num2;
		printf("\tA subtração de %d - %d é %d\n\n", num1, num2, x);
		
		x = num1 / num2;
		printf("\tA divisão de %d e %d / %d\n\n", num1, num2, x);
		
		x = num1 * num2;
		printf("\tA multiplicação de %d x %d é %d\n\n", num1, num2, x);
		
	
		
		
		
		
		return 0;
	}
