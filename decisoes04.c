#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese");
		int n1;
		
		printf("Digite um numero: ");
		scanf("%d", &n1);
		
		if(n1 > 0 ){
			printf("� POSITIVO");
		}
		else if (n1 < 0){
			printf("� NEGATIVO");
		}
		else{
			printf("� ZERO!");
		}
		
		
		
		return 0;
	}
