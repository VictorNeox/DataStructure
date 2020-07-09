#include <stdio.h>
#include "lista.h"


int main(void) {
  List* l;
  l = create_list();
  l = insert_element(l, 5);
  l = insert_element(l, 7);
  l = insert_element(l, 9);
  l = insert_element(l, 11);
  print_list(l);
  printf("\n\n\n\n");
  l = remove_element(l, 5);
  print_list(l);
  printf("\n\n\n\n");
  l = remove_element(l, 11);
  print_list(l);

  free_list(l);

  print_list(l);
  return 0;
}