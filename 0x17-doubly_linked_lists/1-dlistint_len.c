#include "lists.h"

/**
 * dlistint_len - function gets length of the list
 * @h: head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
