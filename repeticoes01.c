#include <stdio.h>
#include <locale.h>


	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int numero, resultado, contar;
		//i vem de indexador 
		//estrutura de repetição for
			for( contar=0; contar <5; contar++ ){
				
				printf("Digite um numero: ");
				scanf("%d", &numero);
				
				resultado = numero * 3;
				
				printf("O resultado foi: %d\n", resultado);		
			}
		
		return 0;
	}
