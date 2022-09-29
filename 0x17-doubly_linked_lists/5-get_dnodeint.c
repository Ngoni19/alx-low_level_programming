#include "lists.h"

/**
 * get_dnodeint_at_index - function that gets a node at index
 * @head: pointer to head of list
 * @index: index of node to find
 * Return: pointer to node if found, or NULL in otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head)
	{
		if (j++ == index)
			break;
		head = head->next;
	}
	return (head);
}
