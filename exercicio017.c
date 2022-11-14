#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int receita, despesa, lucro, preju;
		
		printf("Receita: ");
		scanf("%d", &receita);
		
		printf("Despesa: ");
		scanf("%d", &despesa);
		
		if(receita > despesa){
			
			printf("LUCRO");
		}else{
			printf("PREJU");
		}
		
		
		return 0;
	}
