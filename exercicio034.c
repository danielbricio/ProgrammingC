#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//DO WHILE - REPITA ATÉ

	int main(){
		setlocale(LC_ALL, "Portuguese");
		
		int codigo, contPan, contCha, contVas;
		
		contPan = contCha = contVas = 0;
		
		do{
			system("cls");
			
			printf("\n \n \nMenu de Opções \n");
			printf("0 - Encerra Programa \n");
			printf("1 - Incluir Panela \n");
			printf("2 - Incluir Chaleira \n");
			printf("3 - Incluir Vassoura \n");
			printf("4 - Relatório \n");
			printf("Escolha uma opção \n");
			scanf("%d", &codigo);
			
			switch (codigo){
				
				case 0:
					printf("Encerrando o Programa!");
					break;
					
			 	case 1:
			 		printf("Colando PANELA");
			 		break;
	
			 	case 2:
			 		printf("Colando CHALEIRA");
			 		break;
			 		
			 	case 3:
			 		printf("Colando VASSOURA");
			 		break;
				
				case 4:
					printf("PRODUTOS COLOCADO");
			 		break;
					 			 		
			 		default:
			 			printf("Opção Inválida");
			 			break;
			 			
			 	system("pause");
			 }
			
						
		}while (codigo != 0);
		
		
		return 0;
	}
	
	/*
	REVISÃO ESTRUTURA DE REPETIÇÕES
	
	SINTAXE 
	
	FOR (INICIALIZAÇÃO; TESTE DE REPETIÇÃO; REINICIALIZAÇÃO INCREMENTO)
	{
		Comando 1;
		Comando 2;
	}
	
	------------------
	
	Inicialização
	while(teste de repetição)
	{
		Comando 1;
		Comando 2;
		
		Reinicialização
	}
	
	-----------
	
	do{
	
	 	Comando 1;
		Comando 2;
		
	}while(teste de repetição);
	
	*/
