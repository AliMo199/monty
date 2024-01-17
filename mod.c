#include "monty.h"
/**
 * f_mod - compute rest of division of second
 * top element of stack by top element of stack
 * @head: head of stack
 * @counter: line_num
 * Return: no return
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *he;
	int lenght = 0, aux;

	he = *head;
	while (he)
	{
		he = he->next;
		lenght++;
	}
	if (lenght < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	if (he->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = he->next->n % he->n;
	he->next->n = aux;
	*head = he->next;
	free(he);
}
