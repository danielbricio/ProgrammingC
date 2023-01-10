#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int consumo, quantidade;
		float valorDaConta;
		
		valorDaConta = 0;
		
		do{
			
			printf("Digite um consumo válido \n");
			printf("Digite o consumo: ");
			scanf("%d", &consumo);
			
		}while(consumo < 0 || consumo > 120);
		
		
		if(consumo > 100){
			
			quantidade = consumo - 100;
			
			consumo = consumo - quantidade; // consumo =- quantidade;
			
			valorDaConta = valorDaConta + ( quantidade * 5);
			
		}
		
		if(consumo > 30){
			
			quantidade = consumo - 30;
			
			consumo = consumo - quantidade; // consumo =- quantidade;
			
			valorDaConta = valorDaConta + ( quantidade * 2);
			
		}
		
		if(consumo > 10){
			
			quantidade = consumo - 10;
			
			consumo = consumo - quantidade; // consumo =- quantidade;
			
			valorDaConta = valorDaConta + ( quantidade * 1);
			
		}
		
		valorDaConta = valorDaConta + 7;
		
		printf("Valor da conta a pagar é: %.2f", valorDaConta);
		
		return 0;
	}
