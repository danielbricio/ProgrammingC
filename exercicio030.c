#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
			int numero = 23, somaPos = 0, somaNeg = 0;
			
			while (numero != 0 ){
				printf("Digite um numero: ");
				scanf("%d", &numero);
				
					if(numero >0){
					somaPos = somaPos + numero;
					}else{
					somaNeg = somaNeg + numero;
					}
			
			}
				
			printf("soma positivo: %d \n", somaPos);
			printf("soma negatvo: %d \n", somaNeg);
	
		return 0;
	}
