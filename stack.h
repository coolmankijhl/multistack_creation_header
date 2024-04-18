#include <stdio.h>
#include <stdlib.h>

#ifndef stack_h
#define stack_h

// Node definition
typedef struct stackNode
{
	int data;

	struct stackNode* next;
	int index;
} stackNode;

// Creates a new stack
struct stackNode* stack()
{
	struct stackNode *top = (struct stackNode*)malloc(sizeof(struct stackNode));
	top->next = NULL;
	top->index = 0;
	return top;
}

// Creates a new node on top of the stack
void push(struct stackNode **top)
{
	struct stackNode *ptr = (struct stackNode*)malloc(sizeof(struct stackNode));
	ptr->next = *top;
	ptr->index = ((*top)->index) + 1;

	*top = ptr;
}

// Destroys/frees stack from top-down
void destroy(struct stackNode *top)
{
	struct stackNode *behindTop = top;
	while(top != NULL)
	{
		top = top->next;
		//if any data is malloc'ed or calloc'ed free it here using free((void*)behindTop->data);
		behindTop = top;
	}
	free(top);
}

// Removes and returns the node on top of the stack
struct stackNode* pop(struct stackNode **top)
{
	if(*top == NULL)
		return NULL;
	
	struct stackNode *temp = *top;
	if((*top)->next != NULL)
		*top = (*top)->next;
	else
		free((*top));
	return temp;
}

// Returns the node on top of the stack
struct stackNode* peek(struct stackNode *top)
{
	if(top == NULL)
		return NULL;

	return top;
}


// Returns the index of the top of the stack plus one
int size(struct stackNode *top)
{
	if(top == NULL)
		return 0;

	int max = 0;
	int hold;
	struct stackNode *ptr = top;

	while(ptr != NULL)
	{
		hold = ptr->index;
		if(hold > max)
			max = hold;
		ptr = ptr->next;
	}

	return max+1;
}

// Returns the node on the bottom of the stack
struct stackNode* bottom(struct stackNode *top)
{
	struct stackNode *bottom = top;
	while(bottom->next != NULL && bottom != NULL)
		bottom = bottom->next;

	return bottom;
}

// Reverses a stack's order
void reverse(struct stackNode **top)
{
	struct stackNode* prev = NULL;
	struct stackNode* current = *top;
	struct stackNode* next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*top = prev;
}

// Resets the indexes of the stack
void reindex(struct stackNode **top, int max_index)
{
	struct stackNode* ptr = *top;

	while(ptr != NULL)
	{
		ptr->index = max_index-1;
		ptr = ptr->next;
		max_index--;
	}	
}

#endif
