#include <stdio.h>
#include <locale.h>

	int main(){
		
		int velI, velF, dif;
		
		printf("\tDigite a velocidade inicial do carro: \n");
		scanf("%d", &velI);
		
		printf("\tDigite a velocidade final do carro: \n");
		scanf("%d", &velF);
		
		dif = velF - velI;
		
		printf("\tA velocidade percorrida pelo o carro foi de %.3dkm \n\n", dif);
		
		
		
		return 0;
	}
