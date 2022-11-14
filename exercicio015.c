#include <stdio.h>
#include <locale.h>

	int main(){
		
		int n1;
		
		printf("digite: ");
		scanf("%d", &n1);
		
		if(n1 != 1000){
			printf("o numero eh DIFERENTE de 1000");
		}else{
			printf("o numero eh IGUAL a 1000");
		}
		
		
		
		return 0;
	}
