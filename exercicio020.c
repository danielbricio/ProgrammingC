#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float salarioHora, salarioBruto, salarioLiquido, salarioFamilia;
		int qtdeHoras, qtdeFilhos;
		
		printf("Digite o valor do salário hora: ");
		scanf("%f", &salarioHora);
		
		printf("Digite a quantidade de horas trabalhada: ");
		scanf("%d", &qtdeHoras);
		
		printf("Digite a quantidade de filhos menores de 14 anos: ");
		scanf("%d", &qtdeFilhos);
		
		salarioBruto = (salarioHora * qtdeHoras);
		
		if(salarioBruto <= 700){
			salarioFamilia = qtdeFilhos * 8.50;
		}else if(salarioBruto <= 1000){
			salarioFamilia = qtdeFilhos * 6.50;
		}else{
			salarioFamilia = qtdeFilhos * 2.50;
		}
		
		salarioLiquido = salarioBruto + salarioFamilia;
		
		printf("Salário Bruto.............: R$ %.2f \n", salarioBruto);
		printf("Salário Familia...........: R$ %.2f \n", salarioFamilia);
		printf("Salário Liquído...........: R$ %.2f \n", salarioLiquido);
		
		
		return 0;
	}
