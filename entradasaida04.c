#include <stdio.h>
#include <locale.h>

	int main (){
		
		setlocale(LC_ALL, "Portuguese");
		
		//OPERADORES ARITM�TICOS
		
		int num1, num2, x;
		
		printf("Digite um numero: ");
		scanf("%d", &num1);
		
		printf("Digite outro numero: ");
		scanf("%d", &num2);
		
		x = num1 + num2;
		printf("\tA soma de %d + %d � %d\n\n", num1, num2, x);
		
		x = num1 - num2;
		printf("\tA subtra��o de %d - %d � %d\n\n", num1, num2, x);
		
		x = num1 / num2;
		printf("\tA divis�o de %d e %d / %d\n\n", num1, num2, x);
		
		x = num1 * num2;
		printf("\tA multiplica��o de %d x %d � %d\n\n", num1, num2, x);
		
	
		
		
		
		
		return 0;
	}
