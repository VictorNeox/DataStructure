#include <stdio.h>
#include "queue.h"

int main(void) {
  Queue* fila = create_queue();
  insertElement(fila, 5);
  insertElement(fila, 70);
  insertElement(fila, 98);
  insertElement(fila, 8);

  printQueue(fila);

  removeElement(fila);
  printf("\n\n\n");
  printQueue(fila);

  removeElement(fila);
  printf("\n\n\n");
  printQueue(fila);

  removeElement(fila);
  printf("\n\n\n");
  printQueue(fila);

  removeElement(fila);
  printf("\n\n\n");
  printQueue(fila);
  
  freeQueue(fila);
  return 0;
}