#include "monty.h"
/**
  *f_sub- subtraction of head
  *@head: head of stack
  *@counter: line_num
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sub_h, node_c;

	aux = *head;
	for (node_c = 0; aux != NULL; node_c++)
		aux = aux->next;
	if (node_c < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sub_h = aux->next->n - aux->n;
	aux->next->n = sub_h;
	*head = aux->next;
	free(aux);
}
