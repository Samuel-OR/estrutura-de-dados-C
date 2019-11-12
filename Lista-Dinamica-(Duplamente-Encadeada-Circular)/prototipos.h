//
//  ListaDuplaEncadeada.h
//  ListaDuplaEncadeada
//
//  Created by Antonio Oseas on 09/05/19.
//  Copyright © 2019 Antonio Oseas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct no NO;

NO *criaLista();										//OK
NO *inserirInicio(NO *lista, int valor);				//OK
NO *inserirFinal(NO *lista, int valor);					//OK
NO *inserirOrdenado(NO *lista, int valor);				//OK
NO *buscarElemento(NO *lista, int valor);				//OK
NO *removerElemento(NO *lista, int valor);				//OK
NO *alterarElementoNaLista(NO *lista, NO *NOvoNO);		//OK
NO *duplicarLista(NO *lista);							//

int tamanhoLista(NO *lista);				//OK
int menu();									//OK

void mostrarLista(NO *lista);				//OK
void mostrarListaInversa(NO *lista);		//OK
void liberar(NO *lista);					//OK

