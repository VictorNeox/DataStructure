#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

struct list {
  int info;
  List* prox;
};

struct stack {
  List* prim;
};

Stack* create_stack() {
  Stack* p = (Stack *)malloc(sizeof(Stack));
  p->prim = NULL;
  return p;
}

void push(Stack* s, int v) {
  List* p = (List*)malloc(sizeof(List));
  p->info = v;
  p->prox = s->prim;
  s->prim = p;
}

int vazia(Stack* s) {
  return (s->prim == NULL);
}

int pop(Stack* s) {
  if(vazia(s)) {
    printf("PILHA VAZIA!\n");
    exit(1);
  }
  List* aux = s->prim;
  int v = aux->info;
  s->prim = aux->prox;
  free(aux);
  return v;
}

void liberar(Stack* s) {
  List* aux = s->prim;
  while(aux != NULL) {
    List* next = aux->prox;
    free(aux);
    aux = next;
  }
  free(s);
}

int topo(Stack* s) {
  if(vazia(s)) {
    printf("Lista Vazia!\n");
    exit(1);
  }
  return s->prim->info;
}