#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL,"Portuguese");
		
		float receita, despesa;
		
		printf("Receita: ");
		scanf("%f", &receita);
		
		printf("Despesa: ");
		scanf("%f", &despesa);
		
		if(receita > despesa){
			printf("LUCRO");
			
		}else{
			printf("PREJU");
		}
		
		return 0;
	}
