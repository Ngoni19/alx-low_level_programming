#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * print numbers using putchar()
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
               
	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
