#include "prototipos.h"

int main(){
    NO *lista, *copia, *busca;
    lista = criarLista();
    int num;

    while(1==1){
        printf("\n************ MENU **************\n");
        printf("  [0] - SAIR\n");
        printf("  [1] - Inserir no Inicio\n");
        printf("  [2] - Inserir no Fim\n");
        printf("  [3] - Inserir Ordenado\n");
        printf("  [4] - Exibir\n");
        printf("  [5] - Exibir Invertida\n");
        printf("  [6] - Copiar\n");
        printf("  [7] - Buscar Elemento\n");
        printf("  [8] - Quantidade de Elemento\n");
        printf("  [9] - Remover Elemento\n");
        printf("  [10] - Liberar Memória \n");
        printf("*********************************\n");
        int op_menu;
        printf("Escolha uma opção: ");
        scanf("%d", &op_menu);

        switch (op_menu){
            case 0:
                exit(1);
            case 1:
                printf("Número a inserir: ");
                scanf("%d",&num);
                lista = inserirInicio(lista, num);
                break;
            case 2:
                printf("Número a inserir: ");
                scanf("%d", &num);
                lista = inserirFinal(lista, num);
                break;
            case 3:
                printf("Número a inserir: ");
                scanf("%d", &num);
                lista = inserirOrdenado(lista, num);
                break;
            case 4:
                mostrarLista(lista);
                break;
            case 5:
        		printf("LISTA INVERTIDA: ");
                mostrarInverso(lista);
                break;
            case 6:
                copia = copiarLista(lista);
                printf("Cópia ");
                mostrarLista(copia);
                break;
            case 7:
                printf("Número a inserir: ");
                scanf("%d", &num);
                busca = buscar(lista, num);
                break;
            case 8:
                printf("Número de Elementos: %d", qtdElementos(lista));
                break;
            case 9:
                printf("Número a remover: ");
                scanf("%d", &num);
                lista = removerElemento(lista,num);
                break;
            case 10:
                liberar(lista);
                lista = criarLista();
                break;
            default:
                printf(" -- Opção Inválida --\n");
                break;
        } 
    }

    return 0;
}
