#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct list {
  int info;
  List* prox;
};

struct stack {
  List* first;
};

Stack* createStack() {
  Stack* stack = (Stack*)malloc(sizeof(Stack));
  stack->first = NULL;
  return stack;
}

void push(Stack* s, int v) {
  List* newElement = (List*)malloc(sizeof(List));
  newElement->info = v;
  newElement->prox = s->first;
  s->first = newElement;
}

void pop(Stack* s) {
  List* aux;
  if(empty(s)) {
    printf("Pilha Vazia!\n");
  } else {
    aux = s->first;
    s->first = aux->prox;
  }
  free(aux);
}

int empty(Stack* s) {
  return (s->first == NULL);
}

void printStack(Stack* s) {
  List* aux;
  if(empty(s)) {
    printf("Pilha Vazia!\n");
    return;
  }
  for(aux = s->first; aux != NULL; aux = aux->prox) {
    printf("%i\n", aux->info);
  }
}

void freeStack(Stack* s) {
  List* aux = s->first;
  while(aux != NULL) {
    List* next = aux->prox;
    free(aux);
    aux = next;
  }
  free(s);
}