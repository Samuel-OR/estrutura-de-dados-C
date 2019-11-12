#include "prototipos.h"


void inserir (int *lista, int valor, int tamanho, int *t){
	system("clear");
	if( *t >= tamanho){
		printf("\nLISTA CHEIA.\n");
	}else{
		lista[*t] = valor;
		(*t)++;
		printf("\nVALOR INSERIDO.\n");
	}
}

int buscar(int *lista, int valor, int *t){
	system("clear");
	if(*t==0){
		printf("\nLISTA VAZIA.\n");
	}else{
		for(int i=0; i<*t; i++){
			if(lista[i] == valor){
				printf("\nVALOR %d ENCONTRADO NA POSIÇÃO %d.\n", valor, i);
				return i;
			}
		}
	}
	printf("\nVALOR NÃO ENCONTRADO.\n");
	return -1;
}

void mostrar(int *lista, int *t){
	system("clear");
	if(*t==0){
		printf("\nLISTA VAZIA.\n");
	}else{
		printf("\n-----Valores da Lista-----\n" );
		for(int i=0; i<*t; i++){
			printf("[%d] ",lista[i]);
		}
		printf("\n--------------------------\n\n" );
	}
}

int* removerInicio(int *lista, int *t){
	system("clear");
	if(*t==0){
		printf("\nLISTA VAZIA.\n");
	}else{
		for(int i=0; i<(*t)-1; i++){
			lista[i] = lista[i+1];
		}
		(*t)--;
		printf("\nVALOR REMOVIDO DO INICIO.\n");
	}
	return lista;
}

int* removerFinal(int *lista, int *t){
	system("clear");
	if(*t==0){
		printf("\nLISTA VAZIA.\n");
	}else{
		(*t)--;
		printf("\nVALOR REMOVIDO DO FINAL.\n");
	}
	return lista;
}

int* remover(int *lista, int valor, int *t){
	system("clear");
	if(*t == 0){
		printf("\nLISTA VAZIA.\n");
	}else{
		int i=0;
		while(i< (*t)){
			if(lista[i] == valor){
				for(int x=i; x<(*t)-1; x++){
					lista[i] = lista[i+1];
				}
				(*t)--;
				printf("\nVALOR REMOVIDO.\n");
				i = max*max;
			}
			i++;
		}
		if(i != (max*max)+1){
			printf("\nVALOR NÃO ENCONTRADO.\n");
		}
	}
	return lista;
}

void sort(int *lista, int t){
	for(int i =0; i<t-1; i++){
		for(int j=1; j<t-i; j++){

			if(lista[j] < lista[j-1]){
				int aux = lista[j-1];
				lista[j-1] = lista[j];
				lista[j] = aux;
			}

		}
	}
}

void inserirOrdenado (int *lista, int valor, int tamanho, int *t){
	system("clear");
	
	if( *t >= tamanho){
		printf("\nLISTA CHEIA.\n");
	}else{
	
		int i;
		for(i = (*t)-1; (lista[i] > valor) && (i>=0); i--){
			lista[i+1] = lista[i];
		}
		lista[i+1] = valor;

		(*t)++;
		printf("\nVALOR INSERIDO ORDENADO.\n");
	}
}