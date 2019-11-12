#include "prototipos.h"

struct no{
	int info;
	NO *proximo, *anterior;
};

NO* inserirInicio(NO *lista, int v){			//FEITA
	NO *novo;
	novo = (NO*) malloc(sizeof(NO));
	novo->info = v;
	
	if( lista == NULL){
		novo->proximo = novo;
		novo->anterior = novo;
	}else{
		NO *aux;
		aux = lista;
		
		novo->proximo = lista;
		lista->anterior = novo;

		for(aux=lista; lista!= aux->proximo; aux = aux->proximo);
		
		aux->proximo = novo;
		novo->anterior = aux;
	}
	return novo;		
}

NO *inserirFinal(NO *lista, int v){				//FEITA
	NO *novo;
	novo = (NO*) malloc(sizeof(NO));
	novo->info = v;
	
	if( lista == NULL){
		novo->proximo = novo;
		novo->anterior = novo;
		return novo;
	}else{
		NO *aux = lista;

		lista->anterior = novo;
		novo->proximo = lista;

		for(aux=lista; lista!= aux->proximo; aux = aux->proximo);
		aux->proximo = novo;
		novo->anterior = aux;
		
		return lista;
	}
}

NO *inserirOrdenado(NO *lista, int v){			//FEITA
	NO *novo;
	novo = (NO*) malloc(sizeof(NO));
	novo->info = v;
	
	if( lista == NULL){
		novo->proximo = novo;
		novo->anterior = novo;
		return novo;
	}else{
		//INICIO
		if( lista->info > novo->info){
			
			NO *aux;
			novo->proximo = lista;
			lista->anterior = novo;
			
			for(aux=lista; lista!= aux->proximo;   aux= aux->proximo);
			aux->proximo = novo;
			novo->anterior = aux;
			return novo;
		}
		
		NO *aux;
		for(aux=lista; lista!= aux->proximo;   aux= aux->proximo){
			//MEIO	
			if( aux->proximo->info > novo->info){
				novo->proximo = aux->proximo;
				aux->proximo->anterior = novo;

				aux->proximo = novo;
				novo->anterior = aux;
				return lista;
			}
		}
		aux->proximo = novo;
		novo->anterior = aux;

		novo->proximo = lista;
		lista->anterior = novo;
		return lista;
	}
}

NO *criaLista(){								//FEITA
	return NULL;
	//linhavazia
}

NO *duplicarLista(NO *lista){						//FEITA
	if( lista == NULL){
		return NULL;
	}
	NO *aux = lista;
	NO *copia = criaLista();

	for(aux = lista; lista != aux->proximo; aux = aux->proximo){
		copia = inserirFinal(copia, aux->info);
	}	

	copia = inserirFinal(copia, aux->info);
	return copia;
}

void mostrarLista(NO *lista){					//FEITA
	if( lista == NULL){
		printf("Lista Vazia.\n");
	}else{
		NO *aux;
		aux = lista;
		do{
			printf("%d ",aux->info );
			aux = aux->proximo;
		}while(lista != aux);
		printf("\n");
	}
}

void mostrarListaInversa(NO *lista){					//FEITA
	if( lista == NULL){
		printf("Lista Vazia.\n");
	}else{
		
		NO *aux;
		aux = lista->anterior;
		
		while(lista != aux){
			printf("%d ",aux->info );
			aux = aux->anterior;
		}
		printf("%d ",aux->info);

		printf("\n");
		
	}
}

NO *buscarElemento(NO *lista, int v){					//FEITA
	if( lista == NULL){
		printf("Lista Vazia.\n");
		return criaLista();
	}else{

		if( lista->info == v){
			printf("Valor encontrado.\n");
			return lista;
		}

		NO *aux;
		for(aux=lista; lista!= aux->proximo; aux = aux->proximo){
			if( aux->info == v){
				printf("Valor encontrado.\n");
				return aux;
			}
		}
		if( aux->info == v){
			printf("Valor encontrado.\n");
			return aux;
		}

		printf("Valor não encontrado.\n");
		return criaLista();
	}
}

int tamanhoLista(NO *lista){					//FEITA

	if( lista == NULL){
		return 0;
	}
	
	int qtd = 1;
	NO *aux;
	
	for(aux=lista; lista!= aux->proximo; aux = aux->proximo){
		qtd++;
	}

	return qtd;
}

NO* removerElemento(NO *lista, int valor){		//FEITA
	
	if( lista == NULL){
		printf("Lista Vazia.\n");
		return lista;
	}else{

		if(lista->proximo == lista){
			if(lista->info == valor){
				return criaLista();
			}else{
				printf("Valor %d não encontrado.\n", valor);
				return lista;
			}
		}

		NO *aux;
		if(lista->info == valor){	
			printf("Valor %d encontrado.\n", valor);

			for(aux=lista; lista != aux->proximo; aux = aux->proximo);
			
			lista = lista->proximo;
			lista->anterior = aux;
			aux->proximo = lista;
			
			return lista;
		}

		for(aux=lista; lista != aux->proximo; aux = aux->proximo){
			if((aux->proximo)->info == valor){
				
				NO *local;
				local = aux->proximo->proximo;

				aux->proximo = local;
				local->anterior = aux;

				printf("Valor %d encontrado.\n", valor);
				return lista;
			}
		}
		printf("Valor %d não encontrado.\n", valor);
		return lista;
	}
}

NO *alterarElementoNaLista(NO *lista, NO *novo){
	if( lista == NULL){
		novo->proximo = novo;
		novo->anterior = novo;
		return novo;
	}else{
		NO* aux;
		for(aux = lista; lista!= aux->proximo; aux = aux->proximo){
			if(aux == novo){
				aux->info = -1;
				printf("Nó alterado.\n");
				break;
			}
		}
		printf("Nó não encontrado.\n");
		return lista;
	}
}

void liberar(NO *lista){						//FEITA
	if( lista == NULL){
		free(lista);
	}else{

		NO *aux;
		aux = lista;

		void liberando(NO *lista){
			if( lista->proximo != aux ){
				liberando(lista->proximo);
			}
			printf("Limpando elemento: %d\n", lista->info);
			free(lista);		
		}
		liberando(lista);
		
		free(lista);		
		free(aux);		
	}
}