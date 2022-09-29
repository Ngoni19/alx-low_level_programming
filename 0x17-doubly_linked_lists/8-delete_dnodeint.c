#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - function inserts a node at position.
 * @h: double pointer to the head.
 * @index: index to insert new node at.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int j = 0;

	if (!h || !(*h))
	{
		return (-1);
	}
	else
	{
		tmp = *h;
		while (index != j++ && tmp)
			tmp = tmp->next;
		if (!tmp)
			return (-1);
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		if (index == 0)
			*h = tmp->next;
		else
			tmp->prev->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
