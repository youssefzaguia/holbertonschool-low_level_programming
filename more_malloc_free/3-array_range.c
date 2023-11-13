#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: n
 */
int *array_range(int min, int max)
{
	int i, d, *n;

	if (min > max)
		return (NULL);

	d = max - min + 1;

	n = malloc(sizeof(int) * d);

	if (n == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		n[i] = min;
		min++;
	}

	return (n);
}
