#include <stdio.h>
#include <locale.h>


	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int valorA, valorB;
		
		printf("Digite um valor: ");
		scanf("%d", &valorA);
		
		printf("Digite outro valor: ");
		scanf("%d", &valorB);
		
		//A lingaugem C representa o valor VERDADEIRO por 1 e o valor FALSO por 0
		printf("valorA > valorB resulta em  %d \n", valorA > valorB);
		
		printf("valorA >= valorB resulta em %d \n", valorA >= valorB);
		
		printf("valorA < valorB resulta em  %d \n", valorA < valorB);
		
		printf("valorA <= valorB resulta em %d \n", valorA <= valorB);
		
		printf("valorA == valorB resulta em %d \n", valorA == valorB);
		
		printf("valorA != valorB resulta em %d \n", valorA != valorB);
		
		
		return 0;
	}
