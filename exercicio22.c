#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int numero;
		
		printf("Digite um  numero: ");
		scanf("%d", &numero);
		
		switch(numero){
			case 0:
				printf("Zero\n");
				break;
			case 1:
				printf("Um\n");
				break;
			case 2:
				printf("Dois\n");
				break;
			case 3:
				printf("Tr�s\n");
				break;
			case 4:
				printf("Quatro\n");
				break;
			case 5:
				printf("Cinco\n");
				break;
			case 6:
				printf("Seis\n");
				break;
			case 7:
				printf("Sete\n");
				break;
			case 8:
				printf("Oito\n");
				break;
			case 9:
				printf("Nove\n");
				break;
			case 10:
				printf("Dez\n");
				break;
				
			default:
				printf("Numero est� fora da faixa de 0 at� 10\n");
				break;
		}
		
		
		
		return 0;
	}
