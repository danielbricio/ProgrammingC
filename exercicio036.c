#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


	int main(){
		
		setlocale(LC_ALL,"Portuguese");
		
		int codigo, disponivel, totalEntrada, totalSaida;
		
		disponivel = 4;
		totalEntrada = totalSaida = 0;
		
		do{
			
			system("cls");
			printf("\tMenu de Op��es \n\n");
			printf(" 0 - Encerrar Programa \n");
			printf(" 1 - Entrando uma pessoa no restaurante \n");
			printf(" 2 - Saindo uma pessoa no restaurante \n");
			printf(" 3 - Mostrando vagas dispon�veis no restaurante \n");
			printf(" 4 - Mostrando o total de pessoas que entraram no restaurante \n");
			printf(" 5 - Mostrando o total de pessoas que sa�ram no restaurante \n");
			printf("\n\nEscolha uma op��o: ");
			scanf("%d", &codigo);
			
			switch (codigo){
			
			case 0:
				printf("Encerrando o Programa \n");
				break;
				//-------
				
			case 1:
				if (disponivel > 0){
					printf("Entrando uma pessoa no restaurante \n ");
					totalEntrada++;
					disponivel--;
				}else{
					printf("Aguarde, o restaurante est� lotado \n");
				}
				break;
				//-------
				
			case 2:
				if(disponivel == 4){
					printf("Restaurante est� vazio! \n");
				}else{
					printf("Saindo uma pessa do restaurante \n");
					disponivel++;
					totalSaida++;
				}
				break;
				//-------
				
			case 3:
				printf("Existem %d vagas dispon�veis \n", disponivel);
				break;
				//-------
				
			case 4:
				printf("Entraram %d pessoas no restaurante \n", totalEntrada);
				break;
				//-------
				
			case 5:
				printf("Sa�ram %d pessoas no restaurante \n", totalSaida);
				break;
				//-------
				
			default:
				printf("Op��o Inv�lida");
				break;
				
			
		}
			
		}while(codigo !=0);
		
		
		
		
		return 0;
	}
