#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - function adds a node to the end of list.
 * @head: double pointer to the head.
 * @n: data to add to new node.
 * Return: pointer to new element, NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nod = NULL, *tmp = NULL;

	new_nod = malloc(sizeof(dlistint_t));
	if (!new_nod)
	{
		free(new_nod);
		return (NULL);
	}
	new_nod->next = NULL;
	new_nod->prev = NULL;
	new_nod->n = n;

	if (!head || !(*head))
	{
		*head = new_nod;
		return (new_nod);
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		new_nod->prev = tmp;
		tmp->next = new_nod;

		return (new_nod);
	}
	return (NULL);
}
