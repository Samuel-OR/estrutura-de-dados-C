#include <stdio.h>
#include<stdlib.h>
#define max 200


void inserir (int *lista, int valor, int tamanho, int *t);

int buscar(int *lista, int valor, int *t);

void mostrar(int *lista, int *t);

int* removerInicio(int *lista, int *t);

int* removerFinal(int *lista, int *t);

int* remover(int *lista, int valor, int *t);

void sort(int *lista,int t);

void inserirOrdenado (int *lista, int valor, int tamanho, int *t);