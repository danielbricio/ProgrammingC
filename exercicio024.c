#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	//i++ � um operador de incremento - � a mesma coisa que i = i + 1;
	//i-- � um operador de decremento - � a mesma coisa que i = i - 1;
	for(i=15;i<=20;i++){
		
		printf("%d \n", i);
	}
	
	
	return 0;
}
