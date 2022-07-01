#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * program prints combination of 2-digits
 * 1 is 01, 00 01 and 01 00--> 0 and 1
 * Return: Always 0
*/

int main(void)
{
	int x, q;

	for (x = 0; x <= 98; x++)
	{
		for (q = x + 1; q <= 99; q++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');

			if (x == 98 && q == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
