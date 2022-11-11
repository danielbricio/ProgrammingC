//Variaveis são areas de memória do programa utilizada para guardar infomrações.
//declarar uma variável significa dar um nome a ela(variavel)


#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		//precisamos defitnir que tipo de dado ela vai armazenar; int 
		
		int numero; //declaração de variáveis
		//tipo lista_de_variaveis
		//para numeros do tipo INTEIRO
		
		//variáveis do mesmo tipo pode ser declaradas em uma unica linha
		float nota1, nota2 nota3;
		//numero com casas decimais ou fracionarios utilizanos float
		
		char letra;
		//char para letras ou conjunto de caracteres 'char= character'
		
		
		
		numero = 37;
		
		printf("O valor da variável \"número\" é: %d", numero);
		
		numero = 44 + 10;
		
		printf("\n\nO novo valor da variável \"número\" é %d ", numero);
		
		
		
		return 0;
	}
