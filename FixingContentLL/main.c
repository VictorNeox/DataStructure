#include <stdio.h>
#include "list.h"


int main(void) {
  List* list = createList();
  list = insertElement(list, 7);
  list = insertElement(list, 9);
  list = insertElement(list, 25);

  printList(list);

  printf("\n\n");
  list = removeElement(list, 25);
  printList(list);
  return 0;
}