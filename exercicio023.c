#include <stdio.h>
#include <locale.h>


	int main(){
		
		setlocale(LC_ALL, "Portuguese");
		
		int a, i;
		
		
		/*for(inicializa��o; repeti��es; reinicializa��o, incremento){
		}*/
		for (i=0; i<10; i++){
			a = a + 1;
			printf("%d \n", a);
		}
		
		
		return 0;
	}
