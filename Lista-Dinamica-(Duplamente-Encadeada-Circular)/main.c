#include "prototipos.h"

int main(){
    NO *lista, *busca, *copia, *novo;
    lista = criaLista();
    int num;

    while(1==1){
        printf("\n************ MENU **************\n");
        printf("  [0] - SAIR\n");
        printf("  [1] - Inserir no Inicio\n");
        printf("  [2] - Inserir no Fim\n");
        printf("  [3] - Inserir Ordenado\n");
        printf("  [4] - Exibir\n");
        printf("  [5] - Exibir Invertida\n");
        printf("  [6] - Duplicar\n");
        printf("  [7] - Buscar Elemento\n");
        printf("  [8] - Alterar Elemento na Lista\n");        
        printf("  [9] - Quantidade de Elemento\n");
        printf("  [10] - Remover Elemento\n");
        printf("  [11] - Liberar Memória \n");
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
                printf("LISTA: ");
                mostrarLista(lista);
                break;
            case 5:
                printf("LISTA INVERTIDA: ");
                mostrarListaInversa(lista);
                break;
            case 6:
                copia = duplicarLista(lista);
                printf("Réplica: ");
                mostrarLista(copia);
                copia = criaLista();
                break;
            case 7:
                busca = criaLista();
                printf("Número a buscar: ");
                scanf("%d", &num);
                busca = buscarElemento(lista, num);
                busca = criaLista();
                break;
            case 8:
                printf("Número do novo nó: ");
                //scanf("%d", novo.info);
                alterarElementoNaLista(lista,novo);       //
                break;
            case 9:
                printf("Número de Elementos: %d", tamanhoLista(lista));
                break;
            case 10:
                printf("Número a remover: ");
                scanf("%d", &num);
                lista = removerElemento(lista,num);
                break;
            case 11:
                liberar(lista);
                break;
            default:
                printf(" -- Opção Inválida --\n");
                break;
        } 
    }

    return 0;
}