/*
3. Fazer um programa que possibilite várias opções de cálculos a partir de um menu. O programa 
 chamará a função correspondente a cada cálculo.
[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50
[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
[ c ] S = 1000/1 - 997/2 + 994/3.........
[ d ] S = 480/10 - 475/11 + 470/12 - .......
[ f ] FIM
Obs. Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos.
*/
#include <stdio.h>

//prototipo
void funcaoA(void);
void funcaoB(void);
void funcaoC(void);
void funcaoD(void);

int main(void){
	char opcao;
	do{
		system("cls");
		printf("[ a ] S = 1/1 + 3/2 + 5/3 +........+ 99/50\n");
		printf("[ b ] S = 1/1 - 2/2 + 3/3 -..0.....- 10/10\n");
		printf("[ c ] S = 1000/1 - 997/2 + 994/3..........\n");
		printf("[ d ] S = 480/10 - 475/11 + 470/12 - .....\n");
		printf("[ f ] FIM\n");
		printf("Digite uma opcao: ");
		scanf("%c",&opcao);
		fflush(stdin);
		if(opcao >= 'A' && opcao <= 'Z'){
			opcao = opcao + ('a'-'A');
		}
		switch(opcao){
			case 'a':
				funcaoA();
				break;
			case 'b':
				funcaoB();
				break;
			case 'c':
				funcaoC();
				break;
			case 'd':
				funcaoD();
				break;
			case 'f':
				printf("Saindo do sistema.\n");
				break;
			default:
				printf("Erro! Nao e uma opcao valida.\n");
				getch();
		}
	}while(opcao!='f');
	
	return 0;
}

//[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50
void funcaoA(void){
	int i, j;
	float s=0;
	for(i=1,j=1;i<=99,j<=50;i+=2/*i=i+2*/,j++){
		s+=(float)i/j;
	}
	printf("O resultado e %f",s);
	getch();
}

//[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
void funcaoB(void){
	int i, j;
	float s=0;
	for(i=1,j=1;i<=10,j<=10;i++,j++){
		if(i%2==0){
			s-=(float)i/j; // s=s-(float)i/j;
		}else{
			s+=(float)i/j;
		}
	}
	printf("O resultado e %f",s);
	getch();
}

//[ c ] S = 1000/1 - 997/2 + 994/3.........
void funcaoC(void){
	int i, j, cont=1;
	float s=0;
	for(i=1000,j=1;i>=0,j<=333;i-=3/*i=i-3*/,j++){
		if(j%2==0){
			s-=(float)i/j;
		}else{
			s+=(float)i/j;
		}
		if (cont==20){
			break;
		}
		cont++;
	}
	printf("O resultado e %f",s);
	getch();
}

//[ d ] S = 480/10 - 475/11 + 470/12 - .......
void funcaoD(void){
	int i=480, j=10, cont=1;
	float s=0;
	while(cont<=20){
		if(j%2==0){
			s+=(float)i/j;
		}else{
			s-=(float)i/j;
		}
		i+=5;
		j++;
		cont++;
	}
	printf("O resultado e %f",s);
	getch();
}
