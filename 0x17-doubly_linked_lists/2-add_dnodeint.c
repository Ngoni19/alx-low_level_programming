#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function adds a node to the head of the list
 * @head: double pointer to the head
 * @n: data to add into new node
 * Return: pointer to new element, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		tmp->prev = new_nod;
		*head = new_nod;
		new_nod->next = tmp;
		return (new_nod);
	}
	return (NULL);
}
