#include <stdio.h>
#include <locale.h>

#define PI 3.14159 //diretiva define - constante


	int main (){
		
		float vol, raio, altura;
		
		
		printf("Digite o RAIO: ");
		scanf("%f", &raio);
		
		printf("Digite a Altura: ");
		scanf("%f", &altura);
		
		vol = PI * (raio*raio) *altura;
		
		printf("O volume do cilindro eh: %.3f ", vol);
		
		
		return 0;
	}
