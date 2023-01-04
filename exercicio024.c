#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	//i++ é um operador de incremento - é a mesma coisa que i = i + 1;
	//i-- é um operador de decremento - é a mesma coisa que i = i - 1;
	for(i=15;i<=20;i++){
		
		printf("%d \n", i);
	}
	
	
	return 0;
}
