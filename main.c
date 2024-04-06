#include <stdio.h>
#include <stdlib.h>

struct stackNode* createNode(int data);
void push(struct stackNode **top, int data);
struct stackNode* stack();
void display(struct stackNode *top);
void destroy(struct stackNode *top);
void pop(struct stackNode **top);
int isEmpty(struct stackNode *top);

//represents a 'book' in the 'stack of books'
typedef struct stackNode
{
	int data;
	struct stackNode *next;
} stackNode;

int main()
{
	struct stackNode *top = stack();
	push(&top, 0);
	push(&top, 0);
	display(top);
	pop(&top);
	pop(&top);
	display(top);
	if(isEmpty(top))
		printf("empty\n");
	destroy(top);
}

//creates a new stack
struct stackNode* stack()
{
	struct stackNode *top = (struct stackNode*)malloc(sizeof(struct stackNode));
	top->next = NULL;
	top->data = -1;
	return top;
}

//pushs a new node on top of the stack
void push(struct stackNode **top, int data)
{
	if(*top == NULL)
		return;

	struct stackNode *ptr = (struct stackNode*)malloc(sizeof(struct stackNode));
	ptr->data = data;	
	ptr->next = *top;

	*top = ptr;
}

//shows contents of stack
void display(struct stackNode *top)
{
	struct stackNode *ptr = top;
	while(ptr != NULL)
	{
		printf("%p(%d, %p)\n", ptr, ptr->data, ptr->next);
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
	*top = (*top)->next;
	free(temp);
}

//returns 1 if stack is empty, returns 0 if not
int isEmpty(struct stackNode *top)
{
	if(top->next == NULL)
		return 1;
	return 0;
}
