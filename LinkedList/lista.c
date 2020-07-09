#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

struct list {
  int info;
  List* prox;
};

List* create_list() {
  return NULL;
}

List* insert_element(List* l, int v) {
  List* newElement;
  newElement = (List*)malloc(sizeof(List));
  newElement->info = v;
  newElement->prox = l;
  return newElement; 
}

List* remove_element(List* l, int v) {
  List* aux = l;
  List* prev = NULL;

  while(aux != NULL && aux->info != v) {
    prev = aux;
    aux = aux->prox;
  }
  if(aux == NULL) {
    printf("Elemento não encontrado!\n");
    exit(1);
  }
  if(prev == NULL) {
    l = aux->prox;
  } else {
    prev->prox = aux->prox;
  }
  free(aux);
  return l;
}

void print_list(List* l) {
  List* aux;
  for(aux = l; aux != NULL; aux = aux->prox) {
    printf("%i\n", aux->info);
  }
}

void free_list(List* l) {
  List* aux = l;
  while(aux != NULL) {
    List* prox = aux->prox;
    free(aux);
    aux = prox;
  }
  free(l);
}