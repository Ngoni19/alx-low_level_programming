#include "search_algos.h"

/**
 * linear_search -> linear search algo for arrays.
 * @array: pointer to be inside array.
 * @size: size of the array.
 * @value: value to be searched for.
 * Return: index of the value into the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (size <= 0 || !array)
		return (-1);
	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%lu] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}
	return (-1);
}
