#include "search_algos.h"

/**
 * binary_search -> linear search algo for arrays.
 * @array: pointer to be input to array.
 * @size: size of array.
 * @value: value to be searched for.
 * Return: index of the value into the array.
 */
int binary_search(int *array, size_t size, int value)
{
	j = 0, size_t k = 0, x = 0, y = size - 1;

	if (size <= 0 || !array)
		return (-1);
	while (x <= y)
	{
		printf("Searching in array: ");
		for (k = x; k <= y; k++)
		{
			if (k < y)
				printf("%d, ", array[k]);
			else
				printf("%d\n", array[k]);
		}
		j = (x + y) / 2;
		if (array[j] < value)
			x = j + 1;
		else if (array[j] > value)
			y = j - 1;
		else
			return (j);
	}
	return (-1);
}
