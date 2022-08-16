#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	unsigned int cn = 0;

	tmp = h;
	while (tmp)
	{
		cn++;
		tmp = tmp->next;
	}
	return (cn);
}

