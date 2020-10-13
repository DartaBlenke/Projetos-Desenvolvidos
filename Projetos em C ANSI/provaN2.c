//D'Artagnan Blenke

#include <stdio.h>
#include <math.h>

	float a[6][6], b[6][6], r[6][6];
	int i, j;
	char voltarMenu;
int main (void){
	char opcao;

do{
	printf("-------MENU-------\n");
	printf("1 - Adicao\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Transposta\n");
	printf("5 - Diagonal Principal\n");
	printf("6 - Sair\n\n");
	printf("-------------------\n");
	
	printf("Dig. uma Opcao: ");	
	scanf("%c",&opcao);
	fflush(stdin);
	
	switch (opcao){
		
		case'1':
			printf("Dados da matriz A:\n");
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
			printf("Digite [%i][%i]: ",i,j);
			scanf("%f",&a[i][j]);
			fflush(stdin);
		}
	}
			printf("Dados da matriz B:\n");
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					printf("Digite [%i][%i]: ",i,j);
					scanf("%f",&b[i][j]);
					fflush(stdin);
		}
	}
			
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					r[i][j]=a[i][j]+b[i][j];
		}
	}
	
			printf("--A matriz soma e: \n");
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					printf("%.2f\t",r[i][j]);
		}
		printf("\n");
	}
	float aux1[5][5];
	aux1[i][j]=r[i][j];
	printf("\nENTER para retornar ao MENU");
	voltarMenu='s';
	
			break;
		case'2':
			printf("Dados da matriz A:\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
			printf("Digite [%i][%i]: ",i,j);
			scanf("%f",&a[i][j]);
			fflush(stdin);
		}
	}
			printf("Dados da matriz B:\n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					printf("Digite [%i][%i]: ",i,j);
					scanf("%f",&b[i][j]);
					fflush(stdin);
		}
	}
			
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					r[i][j]=a[i][j]-b[i][j];
		}
	}
	
			printf("--A matriz subtraida e: \n");
			for(i=0;i<6;i++){
				for(j=0;j<6;j++){
					printf("%.2f\t",r[i][j]);
		}
		printf("\n");
	}
		printf("\nENTER para retornar ao MENU");
	voltarMenu='s';
		
			break;
		case'3':
			printf("Dados da matriz A:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
			printf("Digite [%i][%i]: ",i,j);
			scanf("%f",&a[i][j]);
			fflush(stdin);
		}
	}
			printf("Dados da matriz B:\n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("Digite [%i][%i]: ",i,j);
					scanf("%f",&b[i][j]);
					fflush(stdin);
		}
	}
			
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					r[i][j]=a[i][j]*b[i][j];
		}
	}
	
			printf("--A matriz multiplicada e: \n");
			for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%.2f\t",r[i][j]);
		}
		printf("\n");
	}
	printf("\nENTER para retornar ao MENU");
	voltarMenu='s';
	
			break;
		case'4':
			printf("--A matriz e: \n");
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					printf("%.2f\t",aux1[i][j]);
		}
		/*if(i==j){
				m[i][j]*=k;
			}*/
		printf("\n");
	}
			break;
		case'5':
			
			printf("\nENTER para retornar ao MENU");
	voltarMenu='s';
			break;
		case'6':
			printf("Aperte ENTER para finalizar\n");
			return 0;
			
			break;
		default:
			printf("...ERROR...RETORNANDO AO MENU...");
			voltarMenu='s';
			}getch();
		    system("cls");
		}while(voltarMenu=='s');
	
		return 0;
}
