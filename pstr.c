#include "monty.h"
/**
 * f_pstr - print string starting at top of stack,
 * followed by new line
 * @head: head of stack
 * @counter: line_num
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *he;
	(void)counter;

	he = *head;
	while (he)
	{
		if (he->n > 127 || he->n <= 0)
		{
			break;
		}
		printf("%c", he->n);
		he = he->next;
	}
	printf("\n");
}
