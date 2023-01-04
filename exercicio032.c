#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // STD = STANDARD - LIB = LIBARY - BIBLIOTECA PADRÃO


	int main(){
		setlocale(LC_ALL, "Portuguese");
		
		char resposta = 's';
		float nota1, nota2, nota3, media;
		
		while(resposta == 's'){
			
			system("cls");
			printf("Digite a PRIMEIRA nota do aluno: "); //entrada de dados
			scanf("%f", &nota1);
			printf("Digite a SEGUNDA nota do aluno: ");
			scanf("%f", &nota2);
			printf("Digite a TERCEIRA nota do aluno: ");
			scanf("%f", &nota3);
			
			media = (nota1+nota2+nota3)/3; //calculo ou processamento
			
			printf("\nA média do aluno é: %.2f\n", media); //saída de dados
			
			if(media <6 ){
			printf("Aluno Reprovado");
			}else{
					printf("Aluno Aprovado");
			}
			
			printf("\n\nDeseja digitar notas de outro aluno? (S/N)");
			resposta = getche();
			printf("\n\n");
			
		} 
		
		/*system cls
		CLS CLEAR SCREEN 
		*/
			
		return 0;
	}
	
	/*
	
	--eu que fiz--
	
		setlocale(LC_ALL, "Portuguese");
		
		 int i;
		float nota, media;
		char resposta = 's';
		
		while(resposta == 's'){
			
			
		
		for(i=0;i<3;i++){
			
			printf("Digite a nota do aluno: ");
			scanf("%f", &nota);
			
		}
		
		media = (nota + nota + nota) / 3;
		
		if(media <6 ){
			printf("Aluno Reprovado");
		}else{
			printf("Aluno Aprovado", media);
		}
		
		printf("\nA média do aluno é: %.2f", media);
		
			
			printf("\n\n\n\n\nDeseja digitar notas de outro aluno? (S/N)");
			resposta = getche();
			printf("\n\n");
		}
		*/
		
