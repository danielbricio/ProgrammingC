#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float valorA, valorB, dividirMaior;
		
		printf("Primeiro numero? ");
		scanf("%f", &valorA);
		
		printf("Segundo numero? ");
		scanf("%f", &valorB);
		
		if( valorA > valorB){
			dividirMaior = valorA/valorB;
		}else{
			dividirMaior = valorB/valorA;
		}
		
		printf("\n A divis�o do maior pelo menor � %.2f", dividirMaior);
		
		
		
		
		return 0;
	}
