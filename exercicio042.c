 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 
 
 	int main(){
 		
 		setlocale(LC_ALL, "Portuguese");
 		
 		int numero;
 		
 		printf("Digite um numero: ");
 		scanf("%d", &numero);
 		
 		if(numero >= 0 && numero <=100){
 			printf("O numero digitado est� na faixa de o at� 100 \n");
		 }else{
		 	printf("O numero digitado est� fora da faixa de 0 at� 100 \n");
		 }
 		
 		
 		return 0;
	 }
