#include "search_algos.h"

/**
 * binary_search - function that searches for a value with binary search
 * @array: pointer
 * @size: number
 * @value: integer
 *
 * Return: value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1;
	size_t m, i;

	if (array == NULL)
	{
		return (-1);
	}
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[r]);
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
