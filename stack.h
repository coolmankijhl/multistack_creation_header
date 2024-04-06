#include <stdio.h>
#include <stdlib.h>

//represents a 'book' in the 'stack of books'
typedef struct stackNode
{
	//insert your data to be stored here
	struct stackNode *next;
} stackNode;

//creates a new stack
struct stackNode* stack()
{
	struct stackNode *top = (struct stackNode*)malloc(sizeof(struct stackNode));
	top->next = NULL;
	return top;
}

//pushs a new node on top of the stack
void push(struct stackNode **top)
{
	if(*top == NULL)
		return;

	struct stackNode *ptr = (struct stackNode*)malloc(sizeof(struct stackNode));
	ptr->next = *top;

	*top = ptr;
}

//shows contents of stack
void display(struct stackNode *top)
{
	struct stackNode *ptr = top;
	while(ptr != NULL)
	{
		printf("%p(%p)\n", ptr, ptr->next);
		ptr = ptr->next;
	}
}

//destroys stack and frees memory
void destroy(struct stackNode *top)
{
	struct stackNode *behindTop = top;
	while(top != NULL)
	{
		top = top->next;
		free(behindTop);
		behindTop = top;
	}
	free(top);
}

//destroys the top of the stack
void pop(struct stackNode **top)
{
	struct stackNode *temp = *top;
	if((*top)->next != NULL)
		*top = (*top)->next;
	else
		free((*top));
	free(temp);
}

//returns 1 if stack is empty, returns 0 if not
int isEmpty(struct stackNode *top)
{
	if(top->next == NULL)
		return 1;
	return 0;
}

//returns size of the stack
int size(struct stackNode *top)
{
	int count = 0;
	while(top != NULL)
	{
		top = top->next;
		count++;
	}
	return count;
}

//displays pointer information for the top of the stack
void peek(struct stackNode *top)
{
	printf("%p(%p)\n", top, top->next);
}
