#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int codigo;
		
		printf("Digite um codigo numerico: ");
		scanf("%d", &codigo);
		
		switch(codigo){
			case 1:
				printf("Panela\n");
				break;
			case 2:
				printf("Chaleira\n");
				break;
			case 3:
				printf("Prato\n");
				break;
			default:
				printf("Codigo Inválido\n");
				break;
		}
		
		
		
		return 0;
	}
