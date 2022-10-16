#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int n = 612852475143;
	long int _pf;

	for (_pf = 2; _pf < n; _pf++)
	{
		if (n % _pf == 0)
		{
			n = n / _pf;
		}
	}
	printf("%ld\n", _pf);
	return (0);
}
