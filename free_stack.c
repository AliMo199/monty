#include "monty.h"
/**
* free_stack - free doubly linked list
* @head: head of stack
*/
void free_stack(stack_t *head)
{
	stack_t *auxl;

	auxl = head;
	while (head)
	{
		auxl = head->next;
		free(head);
		head = auxl;
	}
}
