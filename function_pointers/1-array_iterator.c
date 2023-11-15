#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: array
 * @size: size of the array
 * @action: a pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
