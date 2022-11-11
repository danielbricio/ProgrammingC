#include <stdio.h>
#include <locale.h>


	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float Volume, height, raio;
		
		raio = 4;
		
		height = 6;
		
		Volume = (3.14 * ((raio * raio) * height));
		
		printf("A Área do volume da lata de azeite é: %.2f ", Volume);
		
		
		return 0;
	}
