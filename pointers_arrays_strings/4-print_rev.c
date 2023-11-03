#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string of adress s
 * return: void
 */
void print_rev(char *s)
{
	int j;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		putchar(s[j]);
		j--;
	}
	putchar('\n');
}
