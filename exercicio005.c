#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int kmInicial = 200000;
		int kmFinal = 207349;
		int kmPercorrido;
		
		printf("\n\n\n\tA quilometragem incial do carro �: %d", kmInicial);
		
		printf("\n\n\n");
		
		printf("\tA quilometragem final do carro � %d ", kmFinal);
				
		printf("\n\n\n");
		
		kmPercorrido = kmFinal - kmInicial;
		
		printf("\tA quilometragem percorrida � %d ", kmPercorrido);
		
		printf("\n\n\n");
		
		
		return 0;
	}
