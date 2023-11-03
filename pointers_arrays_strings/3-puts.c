#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line
 * @str: the string of adress str
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
