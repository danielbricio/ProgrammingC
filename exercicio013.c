#include  <stdio.h>

	int main(){
		
		int num;
		
		printf("Digite um num: \n");
		scanf("%d", &num);
		
		if(num > 1000){
			printf("O numero e MAIOR que 1000");
		}else{
			printf("O numero e MENOR que 1000");
		}
		
		return 0;
	}
