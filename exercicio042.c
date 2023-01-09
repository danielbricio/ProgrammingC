 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 
 
 	int main(){
 		
 		setlocale(LC_ALL, "Portuguese");
 		
 		int numero;
 		
 		printf("Digite um numero: ");
 		scanf("%d", &numero);
 		
 		if(numero >= 0 && numero <=100){
 			printf("O numero digitado está na faixa de o até 100 \n");
		 }else{
		 	printf("O numero digitado está fora da faixa de 0 até 100 \n");
		 }
 		
 		
 		return 0;
	 }
