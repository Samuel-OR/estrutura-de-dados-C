#include <stdio.h>
#include <stdlib.h>

typedef struct no NO;

NO *criarLista();

NO *inserirInicio(NO *lista, int v);

NO *inserirFinal(NO *lista, int v);

NO *inserirOrdenado(NO *lista, int v);

void mostrarLista(NO *lista);

void mostrarInverso(NO *lista);

NO *copiarLista(NO *lista);

NO *buscar(NO *lista, int v);

int qtdElementos(NO *lista);

NO* removerElemento(NO *lista, int valor);

//void liberar(NO *lista);