#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float salarioHora, salarioBruto, salarioLiquido, salarioFamilia;
		int qtdeHoras, qtdeFilhos;
		
		printf("Digite o valor do sal�rio hora: ");
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
		
		printf("Sal�rio Bruto.............: R$ %.2f \n", salarioBruto);
		printf("Sal�rio Familia...........: R$ %.2f \n", salarioFamilia);
		printf("Sal�rio Liqu�do...........: R$ %.2f \n", salarioLiquido);
		
		
		return 0;
	}
