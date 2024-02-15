#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 * in an array with Linear search
 * @array: pointer
 * @size: number
 * @value: int
 *
 * Return: value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int temp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			temp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, temp);
			if (temp == value)
				return (i);
		}
	}
	return (-1);
}
