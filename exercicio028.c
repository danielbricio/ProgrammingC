#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "portuguese");
		
		int soma, i;
		
		for(i=1;i<=100;i++){
			
			printf("%d \n", i);
			
			soma = soma + i;
			
			
			
		}
		printf("a soma é: %d", soma);
		
		return 0;
	}
