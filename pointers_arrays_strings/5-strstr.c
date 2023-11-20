#include "main.h"
#include <stdio.h>
/**
 * _strstr - function that locates a substring
 * @haystack : pointeur
 * @needle : pointeur
 * Return: to NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		for (i = 0; n[i] && h[i] && n[i] == h[i]; i++)
			;
		if (!n[i])
		{
			return (h);
		}
		h++;
	}
	return (0);
}
