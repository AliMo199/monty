#include "monty.h"
/**
 * addnode - add node to head stack
 * @head: head of stack
 * @n: new_val
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *n_node, *aux;

	aux = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = n_node;
	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;
	*head = n_node;
}
