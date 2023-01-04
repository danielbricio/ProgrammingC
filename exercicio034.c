#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//DO WHILE - REPITA AT�

	int main(){
		setlocale(LC_ALL, "Portuguese");
		
		int codigo, contPan, contCha, contVas;
		
		contPan = contCha = contVas = 0;
		
		do{
			system("cls");
			
			printf("\n \n \nMenu de Op��es \n");
			printf("0 - Encerra Programa \n");
			printf("1 - Incluir Panela \n");
			printf("2 - Incluir Chaleira \n");
			printf("3 - Incluir Vassoura \n");
			printf("4 - Relat�rio \n");
			printf("Escolha uma op��o \n");
			scanf("%d", &codigo);
			
			switch (codigo){
				
				case 0:
					printf("Encerrando o Programa! \n");
					break;
					
			 	case 1:
			 		printf("Colando PANELA \n");
			 		contPan++;
			 		break;
	
			 	case 2:
			 		printf("Colando CHALEIRA \n");
			 		contCha++;
			 		break;
			 		
			 	case 3:
			 		printf("Colando VASSOURA\n");
			 		contVas++;
			 		break;
				
				case 4:
					printf("PRODUTOS COLOCADO\n");
					printf("%d Panelas no estoque \n", contPan);
					printf("%d Chaleira no estoque \n", contCha);
					printf("%d Vassoura no estoque \n", contVas);
			 		break;
					 			 		
			 		default:
			 			printf("Op��o Inv�lida\n");
			 			break;
			 			
			 
			 }
				system("pause");
						
		}while (codigo != 0);
		
		
		return 0;
	}
	
	/*
	REVIS�O ESTRUTURA DE REPETI��ES
	
	SINTAXE 
	
	FOR (INICIALIZA��O; TESTE DE REPETI��O; REINICIALIZA��O INCREMENTO)
	{
		Comando 1;
		Comando 2;
	}
	
	------------------
	
	Inicializa��o
	while(teste de repeti��o)
	{
		Comando 1;
		Comando 2;
		
		Reinicializa��o
	}
	
	-----------
	
	do{
	
	 	Comando 1;
		Comando 2;
		
	}while(teste de repeti��o);
	
	*/
