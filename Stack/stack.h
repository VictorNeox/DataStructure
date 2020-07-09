typedef struct list List;
typedef struct stack Stack;

Stack* create_stack();
void push(Stack* s, int v);
int vazia(Stack* s);
int pop(Stack* s);
void liberar(Stack* s);
int topo(Stack* s);