//D'Artagnan Blenke

#include <stdio.h>
#include <math.h>

int i,j;
float matrizA[6][6],matrizB[6][6],matrizR[6][6],aux1[6][6],aux2[6][6],aux3[6][6];
char voltarMenu;
int main (void){
	do{
		char opcaoFuncao;
		printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
		printf("\n%c           MENU           %c",186,186);
		printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
		printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
		printf("\n%c 1 --> SOMA               %c",186,186);
		printf("\n%c 2 --> SUBTRACAO          %c",186,186);
		printf("\n%c 3 --> MULTIPLICACAO      %c",186,186);
		printf("\n%c 4 --> TRANSPOSTA         %c",186,186);
		printf("\n%c 5 --> DIAGONAL PRINCIPAL %c",186,186);
		printf("\n%c 6 --> SAIR               %c",186,186);
		printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
		//Entrada de Dados Principal do Usuário 
		printf("\n\nDig. uma opcao:");
		scanf("%c",&opcaoFuncao);
		fflush(stdin);
		//Estrutura de Dados 
		switch(opcaoFuncao){
			float diagonalPrincipal[6][6],transposta[6][6],constante;
			case '1':
				//Entrada de dados 
				system("cls");
				printf("\n__MATRIZ A__\n");
				for(i=0;i<5;i++){
					for(j=0;j<5;j++){
						printf("Dig. o numero [%i][%i]:",i+1,j+1);
						scanf("%f",&matrizA[i][j]);
						fflush(stdin);
						}
					}
				
				printf("\n__MATRIZ B__\n");
				for(i=0;i<5;i++){
					for(j=0;j<5;j++){
						printf("Dig. o numero [%i][%i]:",i+1,j+1);
						scanf("%f",&matrizB[i][j]);
						fflush(stdin);
						}
					}
				//Processamento e Saída de Dados
				printf("\n__SOMA__\n");
				for(i=0;i<5;i++){
					for(j=0;j<5;j++){
						matrizR[i][j]=matrizA[i][j]+matrizB[i][j];
						aux1[i][j]=matrizR[i][j];
						printf("%.1f\t",matrizR[i][j]);
						}
				printf("\n");
					}	
				voltarMenu='s';
				printf("\nOperacao finalizada com sucesso.\nAperte ENTER para retornar ao inicio (...)");
				break;
			
			case '2':
				//Entrada de Dados 
				system("cls");
				printf("\n__MATRIZ A__\n");
				for(i=0;i<6;i++){
					for(j=0;j<6;j++){
						printf("Dig. o numero [%i][%i]:",i+1,j+1);
						scanf("%f",&matrizA[i][j]);
						fflush(stdin);
					}
				}
				
				printf("\nDig. o valor a subtrair:");
				scanf("%f",&constante);
				fflush(stdin);
				//Processamento e Saída de Dados
				printf("\n__SUBTRACAO__\n");
				for(i=0;i<6;i++){
					for(j=0;j<6;j++){
						matrizR[i][j]=matrizA[i][j]-constante;
						aux2[i][j]=matrizR[i][j];
						printf("%.1f\t",matrizR[i][j]);
					}
					printf("\n");
				}
				voltarMenu='s';
				printf("\nOperacao finalizada com sucesso.\nAperte ENTER para retornar ao inicio (...)");
				break;
			
			case '3':
				//Entrada de dados 
				system("cls");
				printf("\n__MATRIZ A__\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("Dig. o numero [%i][%i]:",i+1,j+1);
						scanf("%f",&matrizA[i][j]);
						fflush(stdin);
					}
				}
				
				printf("\n__MATRIZ B__\n");
   				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("Dig. o numero [%i][%i]:",i+1,j+1);
						scanf("%f",&matrizB[i][j]);
						fflush(stdin);
					}
				}
				//Processamento e Saída de Dados 
				printf("\n__MULTIPLICACAO__\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						matrizR[i][j]=matrizA[i][j]*matrizB[i][j];
						aux3[i][j]=matrizR[i][j];
						printf("%.1f\t",matrizR[i][j]);
					}
					printf("\n");
				}
				voltarMenu='s';
				printf("\nOperacao finalizada com sucesso.\nAperte ENTER para retornar ao inicio (...)");
				break;
			
			case '4':
				//Saida de Dados da Matriz Resultado e Soma
				printf("\nMATRIZ RESULTADO DA SOMA \n");
				for(i=0;i<5;i++){
					for(j=0;j<5;j++){
						printf("%.1f\t",aux1[i][j]);
					}
					printf("\n");
				}
				printf("\nMATRIZ TRANSPOSTA\n");
				for(i=0;i<5;i++){
					for(j=0;j<5;j++){
						transposta[i][j]=aux1[j][i];
					}
				}
				for(i=0;i<5;i++){
					for(j=0;j<5;j++){
						printf("%.1f\t",transposta[i][j]);
					}
					printf("\n");
				}
				system("pause");
				printf("\nAPERTE ENTER PARA CONTINUAR (...)\n");
			
				//Saida de Dados da Matriz Resultado e Subtracao
				system("cls");
				printf("\nMATRIZ RESULTADO DA SUBTRACAO\n");
				for(i=0;i<6;i++){
					for(j=0;j<6;j++){
						aux2[j][i];
						printf("%.1f\t",aux2[i][j]);
					}
					printf("\n");
				}
				printf("\nMATRIZ TRANSPOSTA\n");
				for(i=0;i<6;i++){
					for(j=0;j<6;j++){
						transposta[i][j]=aux2[j][i];
					}
				}
				for(i=0;i<6;i++){
					for(j=0;j<6;j++){
						printf("%.1f\t",transposta[i][j]);
					}
					printf("\n");
				}
				system("pause");
				printf("\nAPERTE ENTER PARA CONTINUAR (...)\n");
				
				//Saida de Dados da Matriz Resultado e Multiplicacao
				system("cls");
				printf("\nMATRIZ RESULTADO DA MULTIPLICACAO\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						aux3[j][i];
						printf("%.1f\t",aux3[i][j]);
					}
					printf("\n");
				}
				printf("\nMATRIZ TRANSPOSTA\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						transposta[i][j]=aux3[j][i];
					}
				}
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("%.1f\t",transposta[i][j]);
					}
					printf("\n");
				}
				voltarMenu='s';
				printf("\nOperacao finalizada com sucesso.\nAperte ENTER para retornar ao inicio (...)");
				break;
			
			case '5':
				//Saida de Dados
				system("cls");
				printf("\n__VALOR FINAL DA MATRIZ SOMA__\n");
				for(i=0;i<5;i++){
					for(j=0;j<5;j++){
						printf("%.1f\t",aux1[i][j]);
						}
					printf("\n");
					}	
				printf("\n__VALOR FINAL DA MATRIZ SUBTRAIDA__\n");
				for(i=0;i<6;i++){
					for(j=0;j<6;j++){
						printf("%.1f\t",aux2[i][j]);
						}
					printf("\n");
					}	
				printf("\n__VALOR FINAL DA MATRIZ MULTIPLICADA__\n");
				for(i=0;i<3;i++){
					for(j=0;j<3;j++){
						printf("%.1f\t",aux3[i][j]);
						}
					printf("\n");
					}	
				
				printf("\n__SOMA DE TODAS AS DIAGONAIS PRINCIPAIS__\n");
				for(i=0;i<6;i++){
					for(j=0;j<6;j++){
						if(i==j){
							diagonalPrincipal[i][j]=aux1[i][j]+aux2[i][j]+aux3[i][j];
						}else{
							diagonalPrincipal[i][j]= 0;
						}
					}
				}
				for(i=0;i<6;i++){
					for(j=0;j<6;j++){
						printf("%.1f\t",diagonalPrincipal[i][j]);
					}
					printf("\n");
				}
				printf("\nOperacao finalizada com sucesso.\nAperte ENTER para retornar ao inicio (...)");
				break;
			
			case '6':
				system("cls");
				printf("\nAPERTE ENTER PARA FECHAR!");
				return 0;
				break;
				
			default:	
				printf("\nValor de menu invalido...\nAperte enter para retornar ao inicio (...)");
				voltarMenu='s';
		}
		getch();
		system("cls");
	}while(voltarMenu=='s');
}	
	
