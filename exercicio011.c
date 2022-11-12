#include <stdio.h>
#include <locale.h>

	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		float not1, not2, not3, media;
		
		printf("Digite a primeira nota do aluno: \n");
		scanf("%f", &not1);
		
		printf("Digite a segunda nota do aluno: \n");
		scanf("%f", &not2);
		
		printf("Digite a terceira nota do aluno: \n");
		scanf("%f", &not3);
		
		
		media = (not1 + not2 + not3) / 3;
		
		printf("A média do aluno é %.2f", media);
		
		
		return 0;
	}
