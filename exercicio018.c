#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float sal, tax, nsal;
		
		printf("\tDigite o sal�rio: ");
		scanf("%f", &sal);
		
		if(sal <= 1000){
			tax = 15;
		}else if(sal <= 2000){
			tax = 10;
		}else{
			tax = 5;
		}
		
		nsal = sal + (sal * (tax/100));
		
		printf("Sal�rio velho.......: R$ %.2f \n", sal);
		
		printf("Taxa................: %.2f%%\n\n", tax);
		
		printf("Novo sal�rio..........: R$ %.2f \n", nsal);
		
		return 0;
	}
