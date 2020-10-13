#include <stdio.h>

int main(void){
	int l, c, n;
	int mat[4][4];
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("Digite o valor [%i][%i]: ",l,c);
			scanf("%i",&mat[l][c]);
			fflush(stdin);
		}
	}
	printf("Digite o valor para multiplicar: ");
			scanf("%i",&n);
			fflush(stdin);
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("%i\t",mat[l][c]*n);
		}
		printf("\n");
	}
	return 0;
}

/*
Construa uma matriz de ordem 4 (4x4), solicite ao usuário os números em inteiro, também solicite ao usuário um valor,
com este valor multiplique todos os números da matriz.

#include <stdio.h>

int main (void){
	//Variáveis?
	int i, j, valor, matriz[4][4];
	
	//Entrada?
	printf("Digite um valor: ");
	scanf("%i",&valor);
	fflush(stdin);
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite o valor [%i][%i]: ",i,j);
			scanf("%i",&matriz[i][j]);
			fflush(stdin);
		}
	}
	
	//Processamento?
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			matriz[i][j]*=valor;
		}
	}
	
	//Saída?
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%i\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
} */
