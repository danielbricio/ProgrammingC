#include <stdio.h>
#include <locale.h>

	 int main()
	 {
	 	setlocale(LC_ALL, "Portuguese");
	 	
	 	int nasc, idade, dias;
	 	float horas, minutos;
	 	double segundos;
	 	
	 	
	 	printf("Quando essa pessoa nasceu? \n\n");
	 	scanf("%d", &nasc);
	 	
	 	idade = 2022 - nasc;
	 	
	 	dias = 365 * idade;
	 	
	 	horas = 8.760 * idade;
	 	
	 	minutos = 525600 * idade;
	 	
	 	segundos = 31536000 * idade;
	 	
	 	printf("\tA a pessoa tem %d anos\n %d dias\n %f horas\n %.4f minutos\n %.4lf segundos ", idade, dias, horas, minutos, segundos);
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	return 0;
	 }
