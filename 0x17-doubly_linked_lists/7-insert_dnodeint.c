#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - function inserts a node at
 * position in a list.
 * @h: double pointer to the head.
 * @idx: index to insert new node at.
 * @n: data to add to new node.
 * Return: pointer to new element, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nod = NULL, *tmp = NULL;
	unsigned int i = 0;

	new_nod = malloc(sizeof(dlistint_t));
	if (!new_nod)
		return (NULL);
	new_nod->next = NULL;
	new_nod->prev = NULL;
	new_nod->n = n;
	if (!h || !(*h))
		*h = new_nod;
	else
	{
		tmp = *h;
		while (idx != i++ && tmp->next)
			tmp = tmp->next;
		if (tmp->next)
			new_nod->prev = tmp->prev;
		else
			new_nod->prev = tmp;
		if (idx == i)
			tmp->next = new_nod, new_nod->prev = tmp;
		else if (idx == i - 1)
		{
			if (tmp->prev)
				tmp->prev->next = new_nod;
			else
				*h = new_nod;
			tmp->prev = new_nod;
			new_nod->next = tmp;
		}
		else
		{
			free(new_nod);
			return (NULL);
		}
	}
return (new_nod);
}
