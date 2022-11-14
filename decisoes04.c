#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese");
		int n1;
		
		printf("Digite um numero: ");
		scanf("%d", &n1);
		
		if(n1 > 0 ){
			printf("É POSITIVO");
		}
		else if (n1 < 0){
			printf("É NEGATIVO");
		}
		else{
			printf("É ZERO!");
		}
		
		
		
		return 0;
	}
