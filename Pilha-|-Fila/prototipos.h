#include <stdio.h>
#include<stdlib.h>

typedef struct no NO;

NO *criaFila();
NO *inserirFila(NO *fila, int valor);
NO *removerFila(NO *fila);
void buscarFila(NO *fila, int valor);
int QtdElementosFila(NO *fila);
void mostrarFila(NO *fila);
void liberarFila(NO *fila);

NO *criaPilha();
NO *inserirPilha(NO *pilha, int valor);
NO *removerPilha(NO *pilha);
void buscarPilha(NO *pilha, int valor);
int QtdElementosPilha(NO *pilha);
void mostrarPilha(NO *pilha);
void ElementoTopo(NO *pilha);
void liberarPilha(NO *pilha);