#include "main.h"
/**
 * print_alphabet-function
 * print alphabet Success
 * return 0 Always
 */
void print_alphabet(void)
{
	char alpbt = 'a';

	while (alpbt <= 'z')
	{
		_putchar (alpbt);
		alpbt++;

	}
	_putchar ('\n');

}
