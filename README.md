# multistack_implementation  
Built a .h file capable of multistacking using singly linked lists.  
This program is meant to be reusable as in the stackNode struct should be edited to contain what data you need it to.  
Contains functions to create and edit multiple stacks.  

struct stack()  
Creates a new stack
  
void push(struct stackNode** top)  
Pushes a new node on top of the stack, does not assign data to given node, top is the current top of the node
  
void display(struct stackNode* top)  
Uses printf to print the pointer to the node and the pointer to the next node of every node in the stack
  
void destroy(struct stackNode *top)  
Frees memory of stack top-down
  
void pop(struct stackNode **top)  
Frees the memory of the top of the stack, assigns new top next node, if there is no next node, it will free the stack
  
int isEmpty(struct stackNode *top)  
Returns 1 if the top points to NULL, returns 0 otherwise

int size(stuct stackNode *top)  
Returns size of the stack

void peek(struct stackNode *top)
Uses printf to print the pointer to the node and the pointer to the next node of the top of the stack
