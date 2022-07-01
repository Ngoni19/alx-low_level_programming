#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * 3 digit combination program
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, p, q;

	for (a = '0'; a < '9'; a++)
	{
		for (p = a + 1; p <= '9'; p++)
		{
			for (q = p + 1; q <= '9'; q++)
			{
				if ((p != a) != q)
				{
					putchar(a);
					putchar(p);
					putchar(q);

					if (a == '7' && p == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
