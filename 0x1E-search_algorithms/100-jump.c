#include "search_algos.h"
#include <math.h>

/**
 * jump_search -> jump search algo for arrays.
 * @array: pointer to be input in array.
 * @size: size of array.
 * @value: value to be searched for.
 * Return: index of the value into the array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x = 0, y = 0, jump_size = sqrt(size);

	if (size == 0 || array == NULL)
		return (-1);

	while (y < size && array[y] < value)
	{
		x = y;
		y += jump_size;
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", x, y);

	while (x < y)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}

	return (-1);
}
