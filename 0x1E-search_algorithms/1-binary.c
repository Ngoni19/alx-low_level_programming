#include "search_algos.h"

/**
 * binary_search -> linear search algorithm for arrays.
 * @array: pointer to be input to array.
 * @size: size of array.
 * @value: value to be searched for.
 * Return: index of the value into the array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t k = 0, j = 0, i = 0, a = size - 1;

	if (size <= 0 || !array)
		return (-1);
	while (i <= a)
	{
		printf("Searching in array: ");
		for (k = i; k <= a; k++)
		{
			if (k < a)
				printf("%d, ", array[k]);
			else
				printf("%d\n", array[k]);
		}
		j = (i + a) / 2;
		if (array[j] < value)
			i = j + 1;
		else if (array[j] > value)
			a = j - 1;
		else
			return (j);
	}
	return (-1);
}
