 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 
 
 	int main(){
 		
 		setlocale(LC_ALL, "Portuguese");
 		
 		int codigo;
 		
 		printf("Digite o codigo do gênero da pessoa: ");
 		scanf("%d", &codigo);
 		
 		if(codigo == 0 || codigo == 1){
 			printf("O código é válido! \n");
		 }else{
		 	printf("O Código não é válido! \n");
		 }
 		
 		
 		return 0;
	 }
