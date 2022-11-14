#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float sal, tax, nsal;
		
		printf("\tDigite o salário: ");
		scanf("%f", &sal);
		
		if(sal <= 1317.07){
			tax = 8;
		}else if(sal <= 2195.12){
			tax = 9;
		}else{
			tax = 11;
		}
		
		nsal = (sal * (tax/100));
		sal = sal - nsal;
		
		printf("Salário velho.......: R$ %.2f \n", sal);
		
		printf("Taxa................: %.2f%%\n\n", tax);
		
		printf("Desconto com taxa..........: R$ %.2f \n", nsal);
		
		return 0;
	}
