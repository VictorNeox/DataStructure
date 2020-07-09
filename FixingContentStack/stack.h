typedef struct stack Stack;
typedef struct list List;


Stack* createStack();
void push(Stack* s, int v);
void pop(Stack* s);
int empty(Stack *s);
void printStack(Stack* s);
void freeStack(Stack* s);