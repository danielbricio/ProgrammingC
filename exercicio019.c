#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float salarioBruto, taxaINSS, descontoINSS, salarioLiquido;
		
		printf("\tDigite o Salário Bruto: ");
		scanf("%f", &salarioBruto);
		
		if(salarioBruto <= 1317.07){
			taxaINSS = 8;
		}else if(salarioBruto <= 2195.12){
			taxaINSS = 9;
		}else{
			taxaINSS = 11;
		}
		
		
		descontoINSS = salarioBruto * (taxaINSS / 100);
		
		salarioLiquido = salarioBruto - descontoINSS;
		
		
		printf("\nSalário Bruto.............: R$ %.2f \n", salarioBruto);
	
		printf("Taxa do INSS..............: %.2f%%\n\n", taxaINSS);
		
		printf("Desconto do INSS..........: R$ %.2f \n", descontoINSS);
		
		printf("\n\n\nSalario Liquido...........: R$ %.2f \n", salarioLiquido);
		
		return 0;
	}
