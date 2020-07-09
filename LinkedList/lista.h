typedef struct list List;

List* create_list();

List* insert_element(List* l, int v);

List* remove_element(List* l, int v);

void free_list(List* l);

void print_list(List* l);