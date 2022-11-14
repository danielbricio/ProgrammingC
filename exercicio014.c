#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int n1, n2;
		
		printf("Primeiro numero? ");
		scanf("%d", &n1);
		
		printf("Segundo numero? ");
		scanf("%d", &n2);
		
		if(n1 > n2){
			
			printf("Numero %d", n1);
		}else{
			printf("Numero %d", n2);
		}
		
		
		return  0;
	}
