#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: nember of elements
 * @size: size of elements
 * Return: n
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	n = malloc(nmemb * size);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		n[i] = 0;

	return (n);
}
