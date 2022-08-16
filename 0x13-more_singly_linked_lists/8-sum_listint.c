#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data (n) in a list.
 * @head: Address of the first node of the list.
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	int total_sum = 0;

	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}
	return (total_sum);
}

