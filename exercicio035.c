#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//DO WHILE - REPITA AT�


	int main(){
		setlocale(LC_ALL, "Portuguese");
		
		int codigo, totEnt, totSai, disponivel;
		
		totEnt = totSai = disponivel = 0;
		
		do{
			system("cls");
			printf("\n \n \nMenu de Op��es \n");
			printf("0 - Encerra Programa \n");
			printf("1 - Incluir Unidade \n");
			printf("2 - Excluir Unidade \n");
			printf("3 - Mostra Dispon�vel \n");
			printf("4 - Mostrar Total de Entradas \n");
			printf("5 - Mostrar Total de Sa�das \n");
			printf("Escolha uma op��o \n");
			scanf("%d", &codigo);
			
				switch(codigo)
					{
						case 0:
							printf(" Encerrando o Programa \n");
							break;
						case 1:
							printf(" incluindo unidade \n");
							totEnt++;
							disponivel++;
							break;
						case 2:
							
							if(disponivel == 0){
								printf("estoque est� vazio\n");
							}else{
								
							printf(" excluindo  Unidade \n");
							totSai++;
							disponivel--;
							}
							
							break;
						case 3:
							printf(" Mostrando Disponivel no estoque \n");
							printf("Disponivel no estoque: %d \n", disponivel);
							break;
						case 4:
							printf(" Mostrando total de entradas no estoque \n");
							printf("entradas no estoque: %d \n", totEnt);
							break;
						case 5:
							printf("Mostrando total de saidas no estoque \n");
							break;
							
							default: printf("Escolheu uma op��o inv�lida \n");
							printf("saidas no estoque: %d \n", totSai);
							break;
					
					}system("pause");
					
			}while (codigo !=0);
	
		
		return 0;
	}
