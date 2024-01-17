#include "monty.h"
/**
 * f_queue - print top
 * @head: head of stack
 * @counter: line_num
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to tail stack
 * @n: new value
 * @head: head of stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *n_node, *aux;

	aux = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
	}
	n_node->n = n;
	n_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = n_node;
		n_node->prev = NULL;
	}
	else
	{
		aux->next = n_node;
		n_node->prev = aux;
	}
}
