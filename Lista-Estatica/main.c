#include "prototipos.h"
int lista[200];
int t_geral= 0;
int valor;

int main(){
	int op;
	while(1==1){
		
		printf("---------- MENU ----------\n" );
		printf("[1] - Inserir Desordenado\n" );
		printf("[2] - Inserir Ordenado\n" );
		printf("[3] - Buscar Valor\n" );
		printf("[4] - Mostrar Lista\n" );
		printf("[5] - Remover Inicio\n");
		printf("[6] - Remover Final\n");
		printf("[7] - Remover Valor\n");
		printf("[0] - SAIR\n");
		printf("--------------------------\n" );
		printf("Opção: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("Digite valor para inserir (Desordenado): ");
				scanf("%d", &valor);
				inserir(lista, valor, max, &t_geral);
				break;
			case 2:
				printf("Digite valor para inserir (Ordenado): ");
				scanf("%d", &valor);
				sort(lista, t_geral);
				inserirOrdenado(lista, valor, max, &t_geral);
				break;
			case 3:
				printf("Digite valor para buscar: ");
				scanf("%d", &valor);
				buscar(lista, valor, &t_geral);
				break;
			case 4:
				mostrar(lista, &t_geral);
				break;
			case 5:
				removerInicio(lista, &t_geral);
				break;
			case 6:
				removerFinal(lista, &t_geral);
				break;
			case 7:
				printf("Digite valor para remover: ");
				scanf("%d", &valor);
				remover(lista,valor, &t_geral);
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