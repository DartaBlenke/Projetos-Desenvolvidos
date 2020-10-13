#include <stdio.h>

#define TAM 2

//prototipo das funções
void mult(int a[TAM][TAM], int b[TAM][TAM]);

// variáveis globais
int mr[TAM][TAM];

int main(void){
	//variáveis
	int ma[TAM][TAM], mb[TAM][TAM], i, j;
	
	//entrada de dados
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Digite MA[%i][%i]: ",i,j);
			scanf("%i",&ma[i][j]);
			fflush(stdin);
		}
	}
	printf("\n\n");
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Digite MB[%i][%i]: ",i,j);
			scanf("%i",&mb[i][j]);
			fflush(stdin);
		}
	}
	
	mult(ma, mb);
	
	printf("\nMATRIZ R:\n");
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%i\t", mr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

// função de multiplicação
void mult(int a[TAM][TAM], int b[TAM][TAM]){
	int i, j, k, s;
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			s=0;
			for(k=0;k<TAM;k++){
				s+=a[i][k]*b[k][j];
			}
			mr[i][j]=s;
		}
	}
	
}

