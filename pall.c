#include "monty.h"
/**
 * f_pall - print stack
 * @head: head of stack
 * @counter: not used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *he;
	(void)counter;

	he = *head;
	if (he == NULL)
		return;
	while (he)
	{
		printf("%d\n", he->n);
		he = he->next;
	}
}
