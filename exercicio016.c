#include <stdio.h>

	int main(){
		
		float n1, n2, nz;
		
		printf("Primeiro numero? ");
		scanf("%f", &n1);
		
		printf("Segundo numero? ");
		scanf("%f", &n2);
		
		if( n1 > n2){
			nz = n1/n2;
			printf("o resultado eh %f", nz);
		}else{
			nz = n2/n1;
			
		}
		
		printf("o rsss eh %f", nz);
		
		
		
		
		return 0;
	}
