#include <stdio.h>
#include "stack.h"

int main(void) {
  Stack* pilha;
  pilha = create_stack();

  push(pilha, 5);
  push(pilha, 9);
  push(pilha, 15);
  push(pilha, 19);

  printf("Topo: %i\n", topo(pilha));
  pop(pilha);
  printf("Topo: %i\n", topo(pilha));
  liberar(pilha);
  return 0;
}