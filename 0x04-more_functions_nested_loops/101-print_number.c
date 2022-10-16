#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - print to stdout
 *
 * @n: params an integer
 *
 * No return
 */


void print_number(int n)
{

	unsigned int num1 = 0;

	if  (n < 0)
	{
		num1 = -n;
		_putchar('-');
	}

	else
	{
		num1 = n;
	}

	if (num1 / 10)
	{
		print_number(num1 / 10);
	}

	_putchar((num1 % 10) + '0');
}
