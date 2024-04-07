#include <stdio.h>

#include "stack.h"

void display(struct stackNode* top)
{
	if(top == NULL)
		return;

	struct stackNode* ptr = top;

	while(ptr != NULL)
	{
		printf("%d(%d, %p)%p ", ptr->index, ptr->data, ptr, ptr->next);
		ptr = ptr->next;
	}
}

int main()
{
	struct stackNode* top = stack();
	top->data = 0;

	push(&top);
	top->data = 1;

	push(&top);
	top->data = 2;

	display(top);
}
