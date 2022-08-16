#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *tp, *tp1;

	tp = head;
	while (tp != NULL)
	{
		tp1 = tp->next;
		free(tp);
		tp = tp1;
	}
}

