#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // STD = STANDARD - LIB = LIBARY - BIBLIOTECA PADRÃO


	int main(){
		setlocale(LC_ALL, "Portuguese");
		
		char resposta = 's';
		int codigo, idade, qtdSolteiro, qtdCasado, qtdDivorciado;
		float mediaSolteiro, mediaCasado, mediaDivorciado;
		
		qtdSolteiro = qtdCasado = qtdDivorciado = 0;
		mediaSolteiro = mediaCasado = mediaDivorciado = 0;
		
		
		while(resposta == 's'){
			
			system("cls");
			
			printf("\n 1 - SOLTEIRO(A)");
			printf("\n 2 - CASADO(A)");
			printf("\n 3 - DIVORCIADO(A)");
			
			printf("Escolha um codigo: ");
			scanf("%d", &codigo);
			
			printf("Digite a idade da pessoa: ");
			scanf("%d", &idade);
			
			
			
			 switch (codigo){
			 	case 1:
			 		mediaSolteiro += idade;
			 		qtdSolteiro++;
			 		break;
	
			 	case 2:
			 		mediaCasado += idade;
			 		qtdCasado++;
			 		break;
			 		
			 	case 3:
			 		mediaDivorciado += idade;
			 		qtdDivorciado++;
			 		break;
			 		
			 		default:
			 			printf("Opção Inválida");
			 			break;
			 }
			 printf("\n\nDeseja digitar dados de outra pessoa? (S/N)");
			resposta = getche();
			printf("\n\n");
			
		}
		
		mediaSolteiro /= qtdSolteiro;
		mediaCasado = mediaCasado/qtdCasado;
		mediaDivorciado = mediaDivorciado/qtdDivorciado;

		printf("A media da idade dos solteiros é? %.2f \n", mediaSolteiro);	
		
		printf("A media da idade dos CASADOS é? %.2f \n", mediaCasado);	
		
		printf("A media da idade dos DIVORCIADOS é? %.2f \n", mediaDivorciado);	
		
		system("PAUSE");		
		
			return 0;
	}
	
