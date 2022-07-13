#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:param pointer to a char
 * @src :param pointer to a char
 * @n :param integer
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}

