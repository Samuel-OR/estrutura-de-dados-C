#include "prototipos.h"
int main(){
	NO *pilha = criaPilha();
	int valor, op;
	while(1==1){
		printf("---------- MENU ----------\n" );
		printf("[1] - Inserir pilha\n" );
		printf("[2] - Remover pilha\n" );
		printf("[3] - Buscar pilha\n" );
		printf("[4] - Mostrar pilha\n" );
		printf("[5] - Quantidade Elementos pilha\n" );
		printf("[6] - Elemento Topo\n" );
		printf("[7] - Liberar pilha\n" );
		printf("[0] - SAIR\n");
		printf("--------------------------\n" );
		printf("Opção: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("Digite valor para inserir na pilha: ");
				scanf("%d", &valor);
				pilha = inserirPilha(pilha,valor);
				break;
			case 2:
				pilha = removerPilha(pilha);
				break;
			/*case 3:
				printf("Digite valor para buscar: ");
				scanf("%d", &valor);
				buscarPilha(pilha, valor);
				break;*/
			case 4:
				mostrarPilha(pilha);
				break;
			/*case 5:
				printf("Quantidade de Elementos: %d\n",QtdElementosPilha(pilha));
				break;
			case 6:
				ElementoTopo(pilha);
			case 7:
				liberarPilha(pilha);
				pilha = criaPilha();
				break;*/
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