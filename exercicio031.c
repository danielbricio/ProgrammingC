#include <stdio.h>
#include <locale.h>


	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int numero, soma=0, qtdlido=0;
		float media;
		char resposta = 's';
		
		while(resposta == 's'){
			
			printf("Digite um numero: ");
			scanf("%d", &numero);
			
			soma+= numero;
			qtdlido++;
			
			printf("Deseja digitar outro numero: (S/N)? ");
			resposta = getche();
			printf("\n");
		}
		/*casting na linguagem C ((float)Operação - 
		ira transforma de inteiro para float ou outro tipo.
		TYPE CASTING)*/
		media = ((float)soma / (float)qtdlido);
		printf("a media dos numeros lidos foi: %.2f \n", media);
		
		return 0;
	}
