#include <stdio.h>
#include <math.h>	
int main (void){
	char opcao;
	float n1, n2, resultado1, resultado2, resultado3, resultado4;
	printf("-------------------\n");
	printf("1 - Adicao\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("5 - Fim\n\n");
	printf("-------------------\n");
	printf("Dig. uma Opcao: ");
	scanf("%c",&opcao);
	fflush(stdin);
	printf("Dig. n1: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Dig. n2: ");
	scanf("%f",&n2);
	fflush(stdin);
	switch (opcao){
		case '1':
			resultado1 = n1 + n2; 
			printf("O valor da Soma e: %f", resultado1);
			break;
		case '2':
			resultado2 = n1 - n2;
			printf("O valor da Subtracao e: %f", resultado2);
			break;
		case '3':
			resultado3 = n1 * n2;
			printf("O valor da Multiplicacao e: %f", resultado3);
			break;
		case '4':
			resultado4 = n1 / n2;
		if (n2 = 0){
			printf("O valor da Divisao e: %f", resultado4);
		}else{
			printf("\nERROR\n");
		}
			break;
		case '5':
			printf("Fim do programa");
			break;

	}
	
	
	
	return 0;	
}
