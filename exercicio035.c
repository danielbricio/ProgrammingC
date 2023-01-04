#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//DO WHILE - REPITA ATÉ

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
			 			printf("Opção Inválida\n");
			 			break;
			 			
			 
			 }
				system("pause");
						
		}while (codigo != 0);
		

	int main(){
		setlocale(LC_ALL, "Portuguese");
		
		int codigo;
		
		do{
			system("cls");
			printf("\n \n \nMenu de Opções \n");
			printf("0 - Encerra Programa \n");
			printf("1 - Incluir Unidade \n");
			printf("2 - Excluir Unidade \n");
			printf("3 - Mostra Disponível \n");
			printf("4 - Mostrar Total de Entradas \n");
			printf("5 - Mostrar Total de Saídas \n");
			printf("Escolha uma opção \n");
			scanf("%d", &codigo);
			
			}while (codigo !=0);
		
	
		
		return 0;
	}
