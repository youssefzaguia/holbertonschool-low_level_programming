#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * @b: size of allocated memory
 * Return: n
 */
void *malloc_checked(unsigned int b)
{
	void *n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
