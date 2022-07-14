#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * @n: param integer
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

