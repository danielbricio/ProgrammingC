#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float nota1 = 3.7, nota2 = 6.9, nota3 = 9.8;
		
		float media;
	
		media = (nota1 + nota2 + nota3) / 3;
		
		
		
		
		printf("\n\n\n\tA m�dia de notas do aluno �: %.1f", media);
		printf("\n\n\n");
		
		/*printf("\n\n\n");
		
		printf("\tA quilometragem final do carro � %d ", kmFinal);
				
		printf("\n\n\n");
		
		kmPercorrido = kmFinal - kmInicial;
		
		printf("\tA quilometragem percorrida � %d ", kmPercorrido);
		
		printf("\n\n\n");*/
		
		
		return 0;
	}
