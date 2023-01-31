#include "search_algos.h"

/**
 * interpolation_search -> interpolation search algo for arrays.
 * @array: pointer to be as input in array.
 * @size: size of array.
 * @value: value to be searched for.
 * Return: index of the value into the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x = 0, y = size - 1, j = 0;

	if (size == 0 || array == NULL)
		return (-1);

	while (array[x] != array[y])
	{
		j = x + (value - array[x]) * (y - x) / (array[y] - array[x]);
		if (j > size)
		{
			printf("Value checked array[%lu] is out of range\n",
					j);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);

		if (array[j] < value)
			x = j + 1;
		else if (value < array[j])
			y = j - 1;
		else
			return (j);
	}

	if (value == array[x])
		return (x);

	return (-1);
}
