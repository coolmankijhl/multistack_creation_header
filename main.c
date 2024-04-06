#include <stdio.h>

//to insert an element into the stack
void push(/*item*/);

//to remove the top element from the stack
void pop();

//view the top element from the stack
void peek();

//returns the top element of the stack
void top();

//returns true if stack is empty, else is false
void isEmpty();

//returns the size of the stack
void size();

//creates a stack
struct stackNode* stack();

//print all elements from the stack
void display();


//represents a 'book' in the 'stack of books'
typedef struct stackNode*
{
	int data;
	struct stackNode *next;
} stackNode;

int main()
{
	stack();
}

struct stackNode* stack()
{
	struct stackNode *top = (struct stackNode*)malloc(sizeof(struct stackNode*));
	return top;
}

void push(struct stackNode *top)
{
	struct stackNode *ptr = (struct stackNode*)malloc(sizeof(struct stackNode*));
	ptr->next = top;
	top = ptr;
	free(ptr);
}

void display(struct stackNode *top)
{
	struct stackNode *ptr = top;
	while(ptr != NULL)
	{
		printf("%p(%p)", top, top->next);
	}
}

