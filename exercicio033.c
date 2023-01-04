#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // STD = STANDARD - LIB = LIBARY - BIBLIOTECA PADRÃO


	int main(){
		setlocale(LC_ALL, "Portuguese");
		
		char resposta = 's';
		int codigo, idade;
		float nota1, nota2, nota3, media;
		
		while(resposta == 's'){
			
			system("cls");
			
			printf("\n 1 - SOLTEIRO(A)");
			printf("\n 2 - CASADO(A)");
			printf("\n 3 - DIVORCIADO(A)");
			
			printf("Escolha um codigo: ");
			scanf("%d", &codigo);
			
			printf("Digite a idade da pessoa: ");
			scanf("%d", &idade);
			
			printf("\n\nDeseja digitar dados de outra pessoa? (S/N)");
			resposta = getche();
			printf("\n\n");
			
			 switch (codigo){
			 	case 1:
			 	case 2:
			 	case 3:
			 		
			 		default:
			 			printf("Opção Inválida")
			 }
			
		}
			
		
			return 0;
	}
	
