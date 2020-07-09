typedef struct queue Queue;
typedef struct list List;

Queue* create_queue();
int empty(Queue* q);
void insertElement(Queue* q, int v);
void removeElement(Queue* q);
void printQueue(Queue* q);
void freeQueue(Queue* q);