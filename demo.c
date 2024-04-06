#include <stdio.h>
#include "stack.h"

//demo for stack.h functions
void main()
{
	struct stackNode *top = stack();
	if(isEmpty(top))
		printf("The stack is currently empty!\n");

	push(&top, 1);
	push(&top, 2);
	
	//'displays' the contents of the stack	
	display(top);

	printf("The size of the stack is currently %d\n", size(top));

	peek(top);
	printf("Used pop to remove the top node and peek to look at the new top of the stack");
	
	destroy(top);
}
