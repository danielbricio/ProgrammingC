#include <stdio.h>
#include <locale.h>

/* desvio condicional simples, informa se um numero � positivo*/

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int num1;
		
		printf("Digite o numero: \n");
		scanf("%d", &num1);
		
	
		//DESVIO CONDICIONAL SIMPLES
		if(num1 > 0 ){
			printf("O Numero � maior que ZERO");
			
		}else{
			printf("� MENOR que ZERO");
		}
		
		
		
		return 0;
	}
