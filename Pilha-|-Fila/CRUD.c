#include "prototipos.h"

struct no{
	int info;
	NO *prox, *inicio, *fim;
};

NO *criaFila(){
	return NULL;
}

NO *inserirFila(NO *fila, int valor){
	NO *novo;
	novo = (NO*) malloc(sizeof(NO));;
	novo->info = valor;
	
	if(fila==NULL){
		novo->inicio = novo;
		novo->fim = novo;
		return novo;
	}
	novo->inicio = fila;
	novo->fim = novo;;
	NO *aux;
	for(aux = fila; aux->prox != NULL; aux= aux->prox);
	aux->prox = novo;
	aux->fim = novo;
	return fila;
}

void mostrarFila(NO *fila){
	if(fila==NULL){
		printf("Fila Vazia.\n");
	}else{
		for(;fila->prox != NULL; fila = fila->prox){
			printf("%d ",fila->info );
		}
		printf("%d\n",fila->info );
	}
}

NO *removerFila(NO *fila){
	if(fila==NULL){
		printf("Fila Vazia.\n");
		return fila;
	}
	NO *aux;
	for(aux = fila; aux->prox != NULL; aux= aux->prox){
		aux->inicio = fila->prox;
	}
	aux->inicio = fila->prox;
	printf("Removido.\n");
	return fila->prox;
}

void buscarFila(NO *fila, int valor){
	if(fila==NULL){
		printf("Valor %d não encontrado.\n", valor);
	}else{
		int status = 0;
		NO *aux = fila;
		do{
			if(aux->info == valor){
				status = 1;
				break;
			}
			aux = aux->prox;
		}while(aux!=NULL);

		if(status == 0){
			printf("Valor %d não encontrado.\n", valor);
		}else{
			printf("Valor %d encontrado.\n", valor);
		}
	}
}

int QtdElementosFila(NO *fila){
	if( fila == NULL){
		return 0;
	}else{
		int cont = 0;
		NO *aux = fila;
		do{
			cont++;
			aux = aux->prox;
		}while(aux!=NULL);
		return cont;
	}
}

void liberarFila(NO *fila){						//FEITA
	if( fila->prox != NULL){
		liberarFila(fila->prox);
	}
	printf("Limpando elemento: %d\n", fila->info);
	free(fila);
}

NO *criaPilha(){
	return NULL;
}

NO *inserirPilha(NO *pilha, int valor){
	NO *novo;
	novo = (NO*) malloc(sizeof(NO));;
	novo->info = valor;

	if(pilha==NULL){
		novo->inicio = novo;
		novo->fim = novo;
		return novo;
	}
	novo->prox = pilha;
	novo->fim = pilha->fim;

	NO *aux = pilha;
	do{
		aux->inicio = novo;
		aux = aux->prox;
	}while(aux!=NULL);
	
	return novo;
}


void mostrarPilha(NO *pilha){
	if(pilha==NULL){
		printf("Fila Vazia.\n");
	}else{
		for(;pilha->prox != NULL; pilha = pilha->prox){
			printf("%d ",pilha->info );
		}
		printf("%d\n",pilha->info );
	}
}


NO *removerPilha(NO *pilha){
	if(pilha==NULL){
		printf("Fila Vazia.\n");
		return pilha;
	}

	NO *aux;
	for(aux = pilha; aux->prox != NULL; aux= aux->prox){
		aux->inicio = pilha->prox;
	}
	aux->inicio = pilha->prox;
	printf("Removido.\n");
	return pilha->prox;
}

/*void buscarFila(NO *fila, int valor){
	if(fila==NULL){
		printf("Valor %d não encontrado.\n", valor);
	}else{
		int status = 0;
		NO *aux = fila;
		do{
			if(aux->info == valor){
				status = 1;
				break;
			}
			aux = aux->prox;
		}while(aux!=NULL);

		if(status == 0){
			printf("Valor %d não encontrado.\n", valor);
		}else{
			printf("Valor %d encontrado.\n", valor);
		}
	}
}

int QtdElementosFila(NO *fila){
	if( fila == NULL){
		return 0;
	}else{
		int cont = 0;
		NO *aux = fila;
		do{
			cont++;
			aux = aux->prox;
		}while(aux!=NULL);
		return cont;
	}
}

void liberarFila(NO *fila){						//FEITA
	if( fila->prox != NULL){
		liberarFila(fila->prox);
	}
	printf("Limpando elemento: %d\n", fila->info);
	free(fila);
}*/