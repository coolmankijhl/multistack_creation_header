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
	printf("\n");
}

int main()
{
	struct stackNode* top = stack();
	top->data = 0;

	push(&top);
	top->data = 1;

	push(&top);
	top->data = 2;

	push(&top);
	top->data = 3;

	display(top);

	reverse(&top);
	display(top);

	reindex(&top, size(top));
	display(top);

	destroy(top);
}
