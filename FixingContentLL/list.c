#include <stdlib.h>
#include <stdio.h>
#include "list.h"

struct list {
  int info;
  List* prox;
};

List* createList() {
  return NULL;
}

List* insertElement(List* l, int v) {
  List* newElement = (List*)malloc(sizeof(List));
  newElement->info = v;
  newElement->prox = l;
  return newElement;
}

List* removeElement(List* l, int v) {
  List* aux = l;
  List* prev = NULL;
  while(aux != NULL && aux->info != v) {
    prev = aux;
    aux = aux->prox;
  }
  if(aux == NULL) {

  }

  if(prev == NULL) {
    l = aux->prox;
  } else {
    prev->prox = aux->prox;
  }
  free(aux);
  return l;
}

void printList(List* l) {
  List* aux;
  int count = 0;
  for(aux = l; aux != NULL; aux = aux->prox) {
    count++;
    printf("%iº: %i\n", count, aux->info);
  }
}

void freeList(List* l) {
  List* aux = l;

  while(aux != NULL) {
    List* prox = aux->prox;
    free(aux);
    aux = prox;
  }
  free(l);
}