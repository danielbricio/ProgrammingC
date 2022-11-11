//TIPO DE DADOS EM C

#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		//precisamos defitnir que tipo de dado ela vai armazenar; int 
		
		int onumero = 25;
		//inteiro
		
		
		float ofloat = 3.14;
		//ponto flutuante
		
		double odouble;
		//ponto flutuante de precisão dupla
		
		char ocaractere[7] = "DANIEL";
		//caractere
		
		//void
		//sem valor
		
		
		printf("O valor da variável \"número\" é: %d", onumero);
		
		
		printf("\n\nO novo valor da variável \"número\" é %.3f ", ofloat);
		
		
		printf("\n\nO novo valor da variável \"caractere\" é %s ", ocaractere);
		
		
		
		return 0;
	}
