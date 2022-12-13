#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int n1;
		
		printf("digite o numero: ");
		scanf("%d", &n1);
		
		if(n1 != 1000){
			printf("o numero é DIFERENTE de 1000");
		}else{
			printf("o numero é IGUAL a 1000");
		}
		
		
		
		return 0;
	}
