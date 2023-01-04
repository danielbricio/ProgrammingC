#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int numero, somaPos, somaNeg, zeros, i;
		
		somaPos = somaNeg = zeros = 0;
		
		for(i=0;i<20;i++){
			printf("Digite um numero: ");
			scanf("%d", &numero);
			
			if(numero >0){
				somaPos = somaPos + numero;
			}else if(numero < 0){
				somaNeg = somaNeg + numero;
			}else{
				zeros++;
			}
		}
		
			printf("Soma dos Positivos:  %d \n ", somaPos);
			
			printf("Soma dos Negativos:  %d \n ", somaNeg);
			
			printf("Soma dos Zeros:  %d \n ", zeros);
		
		
		return 0;
	}
