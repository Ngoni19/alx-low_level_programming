#include "lists.h"

/**
 * free_dlistint - function frees a doubly linked list
 * @head: pointer to head of doubly linked list to free
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
