#include <stdio.h>

	int main(){
		
		int num;
		
		printf("NUMERO? ");
		scanf("%d", &num);
		
		//DESVIO CONDICIONAL COMPOSTO
		if(num > 0){
			printf("POSITIVO");
		}else{
				printf("NEGATIVO");
			}
		
		return 0;
	}
