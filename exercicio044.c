 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 
 
 	int main(){
 		
 		setlocale(LC_ALL, "Portuguese");
 		
 		int codigo;
 		
 		printf("Digite o codigo do g�nero da pessoa: ");
 		scanf("%d", &codigo);
 		
 		if(codigo == 0 || codigo == 1){
 			printf("O c�digo � v�lido! \n");
		 }else{
		 	printf("O C�digo n�o � v�lido! \n");
		 }
 		
 		
 		return 0;
	 }
