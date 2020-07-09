typedef struct list List;

List* createList();
List* insertElement(List* l, int v);
List* removeElement(List* l, int v);
void printList(List* l);
void freeList(List* l);