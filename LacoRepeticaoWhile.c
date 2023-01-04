#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int numero, resultado, i, contar;
		
		contar = 0;
		while(contar < 5){
			
				printf("Digite um numero: ");
		scanf("%d", &numero);
		
		resultado = numero * 3;
		printf("O resultado foi: %d \n", resultado);
			
			contar++;
		}
		
	/*	for(i=0;i<5;i++){
			
		printf("Digite um numero: ");
		scanf("%d", &numero);
		
		resultado = numero * 3;
		printf("O resultado foi: %d \n", resultado);
		
		}*/
		
		
		
		return 0;
	}
