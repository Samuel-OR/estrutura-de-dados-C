#include "prototipos.h"
int main(){
	NO *fila = criaFila();
	int valor, op;
	while(1==1){
		printf("---------- MENU ----------\n" );
		printf("[1] - Inserir Fila\n" );
		printf("[2] - Remover Fila\n" );
		printf("[3] - Buscar Fila\n" );
		printf("[4] - Mostrar Fila\n" );
		printf("[5] - Quantidade Elementos Fila\n" );
		printf("[6] - Liberar Fila\n" );
		printf("[0] - SAIR\n");
		printf("--------------------------\n" );
		printf("Opção: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("Digite valor para inserir na Fila: ");
				scanf("%d", &valor);
				fila = inserirFila(fila,valor);
				break;
			case 2:
				fila = removerFila(fila);
				break;
			case 3:
				printf("Digite valor para buscar: ");
				scanf("%d", &valor);
				buscarFila(fila, valor);
				break;
			case 4:
				mostrarFila(fila);
				break;
			case 5:
				printf("Quantidade de Elementos: %d\n",QtdElementosFila(fila));
				break;
			case 6:
				liberarFila(fila);
				fila = criaFila();
				break;
			case 0:
				exit(0);
			default:
				system("clear");
				printf("VALOR INVALIDO\n");
				break;
		}
	}
	return 0;
}