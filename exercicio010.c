#include <stdio.h>
#include <locale.h>


	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float lucro, despesas, receita;
		
		printf("Informe a receita da empresa:");
		scanf("%f", &receita);
		
		printf("Informe a despesas da empresa:");
		scanf("%f", &despesas);
		
		lucro = receita - despesas;
		
		printf(" O Lucro da empresa foi de %.3f", lucro);
		
		
		
		return 0;
	}
