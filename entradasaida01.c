#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		//declarando variaveis
		float volume, comprimento, largura, altura; 
		
		//entrada de dados
		//função scanf e o tipo de dado que ele vai ler, no caso FLOAT = %f
		printf("Digite o comprimento: \n");
		scanf("%f", &comprimento);
		
		printf("Digite a altura: \n");
		scanf("%f", &altura);
		
		printf("Digite a largura: \n");
		scanf("%f", &largura);

		//processamento de dados ( calculando)
		volume = comprimento * largura * altura;
		
		printf("\tO volume é %.1f\n\n", volume);
		

		return 0;
	}
