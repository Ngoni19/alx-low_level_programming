#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function prints a doubly linked list
 * @h: head of doubly linked list
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}

