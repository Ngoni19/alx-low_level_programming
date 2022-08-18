#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int crnt;

	for (i = 63; i >= 0; i--)
	{
		crnt = n >> i;

		if (crnt & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}

