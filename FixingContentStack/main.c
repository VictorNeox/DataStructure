#include <stdio.h>
#include "stack.h"

int main(void) {
  Stack* pilha = createStack();
  push(pilha, 7);
  push(pilha, 9);
  push(pilha, 25);
  push(pilha, 54);
  printStack(pilha);
  pop(pilha);
  printf("\n\n\n\n");
  printStack(pilha);
  pop(pilha);
  printf("\n\n\n\n");
  printStack(pilha);
  pop(pilha);
  printf("\n\n\n\n");
  printStack(pilha);
  pop(pilha);
  printf("\n\n\n\n");
  printStack(pilha);
  return 0;
}