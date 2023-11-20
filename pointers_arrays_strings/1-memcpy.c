#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - function that copies memory area
 * @dest : pointeur
 * @src : pointeur
 * @n : nbr of byte
 * Return: to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
