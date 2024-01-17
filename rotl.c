#include "monty.h"
/**
  *f_rotl- rotate stack to top
  *@head: head of stack
  *@counter: line_num
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmpl = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmpl->next != NULL)
	{
		tmpl = tmpl->next;
	}
	tmpl->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmpl;
	(*head) = aux;
}
