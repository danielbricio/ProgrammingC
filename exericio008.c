#include <stdio.h>
#include <locale.h>

	int main(){
		
		int velI, velF, dif;
		
		printf("\tDigite a velocidade inicial do carro: \n");
		scanf("%d", &velI); // & comercial passa o endere�o da vari�vel
		
		printf("\tDigite a velocidade final do carro: \n");
		scanf("%d", &velF); //& comercial passa o endere�o da vari�vel
		
		dif = velF - velI;
		
		printf("\tA velocidade percorrida pelo o carro foi de %.3dkm \n\n", dif);
		
		
		
		return 0;
	}
