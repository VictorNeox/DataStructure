#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

struct list {
  int info;
  List* prox;
};

struct queue {
  List* first;
  List* last;
};

Queue* create_queue() {
  Queue *q = (Queue *)malloc(sizeof(Queue));
  q->first = q->last = NULL;
  return q;
}

void insertElement(Queue* q, int v) {
  List* newElement = (List*)malloc(sizeof(List));
  newElement->info = v;
  newElement->prox = NULL;
  if(q->last != NULL)
    q->last->prox = newElement;
  else
    q->first = newElement;
  q->last = newElement;
}

int empty(Queue* q) {
  return (q->first == NULL);
}

void removeElement(Queue* q) {
  List* aux;
  if(empty(q)) {
    printf("FILA VAZIA!\n");
    return;
  }
  aux = q->first;
  q->first = aux->prox;

  if(q->first == NULL)
    q->last = NULL;
  free(aux);
}

void printQueue(Queue* q) {
  List* aux;
  int count = 0;
  if(empty(q)){
    printf("FILA VAZIA!\n");
    return;
  }
  for(aux = q->first; aux != NULL; aux = aux->prox) {
    count++;
    printf("%iº: %i\n", count, aux->info);
  }
}

void freeQueue(Queue* q) {
  List* aux = q->first;
  while(aux != NULL) {
    List* prox = aux->prox;
    free(aux);
    aux = prox;
  }
  free(q);
}