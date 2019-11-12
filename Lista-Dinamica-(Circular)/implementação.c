#include "prototipos.h"

struct no{
	int info;
	NO *proximo;
};

NO *inserirInicio(NO *lista, int v){			//FEITA
	NO *novo;
	novo = (NO*) malloc(sizeof(NO));
	novo->info = v;

	if( lista == NULL){
		novo->proximo = novo;
		return novo;
	}else{
		NO *aux;
		aux = lista;
		
		for(aux=lista; lista!= aux->proximo; aux = aux->proximo);
		
		aux->proximo = novo;
		novo->proximo = lista;
		return novo;
	}
}

NO *inserirFinal(NO *lista, int v){				//FEITA
	NO *novo;
	novo = (NO*) malloc(sizeof(NO));
	novo->info = v;

	if( lista == NULL){
		novo->proximo = novo;
		return novo;
	}else{
		NO *aux;

		for(aux=lista; lista!= aux->proximo; aux = aux->proximo);
		
		aux->proximo = novo;
		novo->proximo = lista;
		return lista;
	}
}


NO *inserirOrdenado(NO *lista, int v){			//FEITA
	NO *novo;
	novo = (NO*) malloc(sizeof(NO));
	novo->info = v;
	if( lista == NULL){
		novo->proximo = novo;
		return novo;
	}else{
		//INICIO
		if( lista->info > novo->info){
			NO *aux;	
			for(aux=lista; lista!= aux->proximo;   aux= aux->proximo);
			aux->proximo = novo;
			novo->proximo = lista;
			return novo;
		}
		
		NO *aux;
		for(aux=lista; lista!= aux->proximo;   aux= aux->proximo){
			//MEIO	
			if( aux->proximo->info > novo->info){
				novo->proximo = aux->proximo;
				aux->proximo = novo;
				return lista;
			}
		}
		aux->proximo = novo;
		novo->proximo = lista;
		return lista;
	}
}


NO *criarLista(){								//FEITA
	return NULL;
	//linhavazia
}


NO *copiarLista(NO *lista){						//FEITA
	if( lista == NULL){
		return criarLista();
	}

	NO *aux = lista;
	NO *copia = criarLista();
	
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


void mostrarInverso(NO *lista){					//FEITA
	if( lista == NULL){
		printf("Lista Vazia.\n");
	}else{
		
		NO *aux;
		aux = lista;
		void inverso(NO *listaInterna, NO *aux){
			if( listaInterna != aux->proximo){
				inverso(listaInterna, aux->proximo);
			}
			printf("%d ", aux->info);
		}
		inverso(lista, aux);
		
	}
}


NO *buscar(NO *lista, int v){					//FEITA
	if( lista == NULL){
		printf("Lista Vazia.\n");
		return criarLista();
	}else{
		
		if( lista->info == v){
			printf("Valor encontrado.\n");
			return lista;
		}

		NO *aux;
		aux = lista;
		for(aux=lista; lista!= aux->proximo; aux = aux->proximo){
			if( aux->info == v){
				printf("Valor encontrado.\n");
				return aux;
			}
		}

		printf("Valor não encontrado.\n");
		return criarLista();
	}
}


int qtdElementos(NO *lista){					//FEITA

	if( lista == NULL){
		return 0;
	}
	
	int qtd = 1;
	NO *aux;
	aux = lista;
	
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

		NO *aux;
		if(lista->proximo == lista){
			if(lista->info == valor){
				return criarLista();
			}else{
				printf("Valor %d não encontrado.\n", valor);
				return lista;
			}
		}

		if(lista->info == valor){	
			printf("Valor %d encontrado.\n", valor);
			
			for(aux=lista; lista != aux->proximo; aux = aux->proximo);
			aux->proximo = lista->proximo;
			
			return lista->proximo;
		}
		printf("HELLO\n");

		for(aux=lista; lista != aux->proximo; aux = aux->proximo){
			if((aux->proximo)->info == valor){
				
				NO *local;
				local = aux->proximo->proximo;

				aux->proximo = local;
				printf("Valor %d encontrado.\n", valor);
				return lista;
			}
		}
		printf("Valor %d não encontrado.\n", valor);
		return lista;
	}
}


/*
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
		printf("Limpando elemento: %d\n", lista->info);
		free(lista);		
		free(aux);		
	}
}
*/