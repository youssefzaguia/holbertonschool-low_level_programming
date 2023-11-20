#include "main.h"
#include <stdio.h>
/**
 * _strchr - function that copies memory area
 * @s : pointeur
 * @c : pointeur
 * Return: to dest
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
