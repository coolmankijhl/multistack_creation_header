# multistack_implementation  
Built a .h file capable of multistacking using singly linked lists.  
This program is meant to be reusable as in the stackNode struct should be edited to contain what data you need it to.  
Contains functions to create, edit, and view multiple stacks.
<br><br>

## To use stack.h

This project has no dependencies, you can just download the file through github or clone the repository and place it in whatever directory you need.  
It is meant for C in the GCC compiler, to include use ```#include "stack.h"``` and replace the data inside ```struct stackNode``` to reflect any data you want to store within a node.
<br><br>

## Examples

There is a ```demo.c``` file in this repo but to see a more extensive demo please see [Bookshell.c](https://github.com/coolmankijhl/bookshell.c)
<br><br>

```c
struct stackNode* stack()
```
Returns a new stack using ```malloc()```, contains ```int index``` and ```struct stack* next```, any other variables *must* be added in ```stack.h```.  
Note: Bottom of the stack has an index of 0.<br><br>

```c
void push(struct stackNode** top)  
```
Creates a new node on top of stack using ```malloc()```, index is set to previous nodes index plus one.<br><br>
  
```c
void destroy(struct stackNode *top)  
```
Frees memory of the stack from top-down.<br><br>
  
```c 
stuct stackNode* pop(struct stackNode **top)
```
Removes and returns memory address of the node on top of the stack, top is then reassigned to next node down.<br><br>

```c
struct stackNode* peek(struct stackNode *top)
```
Returns the node on top of the stack.<br><br>

```c
int size(stuct stackNode *top)  
```
Returns the index of the top plus one.<br><br>

```c
struct stackNode* bottom(struct stackNode *top)
```
Returns the node on the bottom of the stack.<br><br>

```c
void reverse(struct stackNode **top)
```
Reverses a stack's order.<br><br>

```c
void reindex(struct stackNode **top, int max_index)
```
Resets the indexes of the stack to reflect current size and order.
