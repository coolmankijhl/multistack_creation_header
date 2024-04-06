# stack_implementation  
built a .h file capable of multistacking using singly linked lists.  

struct stack()  
creates a new stack
  
void push(struct stackNode** top)  
pushes a new node on top of the stack, does not assign data to given node, top is the current top of the node
  
void display(struct stackNode* top)  
uses printf to print the pointer to the node and the pointer to the next node of every node in the stack
  
void destroy(struct stackNode *top)  
frees memory of stack top-down
  
void pop(struct stackNode **top)  
frees the memory of the top of the stack, assigns new top next node, if there is no next node, it will free the stack
  
int isEmpty(struct stackNode *top)  
returns 1 if the top points to NULL, returns 0 otherwise

int size(stuct stackNode *top)  
returns size of the stack

void peek(struct stackNode *top)
uses printf to print the pointer to the node and the pointer to the next node of the top of the stack
