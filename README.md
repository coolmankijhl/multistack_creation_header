# multistack_implementation  
Built a .h file capable of multistacking using singly linked lists.  
This program is meant to be reusable as in the stackNode struct should be edited to contain what data you need it to.  
Contains functions to create and edit multiple stacks.  
```c
struct stackNode* stack()
```
Creates a new stack using ```malloc()```, contains ```int index``` and ```struct stack* next```, any other variables *must* be added in ```stack.h```.  
Note: Bottom of the stack has an index of 0.

```c
void push(struct stackNode** top)  
```
Creates a new node on top of stack using ```malloc()```, index is set to previous nodes index plus one.
  
```c
void destroy(struct stackNode *top)  
```
Frees memory of the stack from top-down.
  
```c 
void pop(struct stackNode **top)
```
Destroys the top of the stack and frees memory, top is reassigned to next node down.
  
```c
int size(stuct stackNode *top)  
```
Returns the index of the top plus one.
