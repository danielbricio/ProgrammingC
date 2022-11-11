#include <stdio.h>
#include <locale.h>


	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float areaVolume, height, raio;
		
		raio = 4;
		
		height = 6;
		
		areaVolume = 3.14 * ((raio * raio) * height);
		
		printf("A Área do volume da lata de azeite é: d% ", areaVolume);
		
		
		return 0;
	}
