#include "main.h"
#include <stdio.h>

/**
 * print_line - Print line depending on the integer n.
 * @n : tThe number of '_' characters to use
 * Return: Void.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}


