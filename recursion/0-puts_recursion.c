#include"main.h"
#include <stdio.h>
/**
 *_puts_recursion - function that prints a string, followed a new line
 *  @s :pointeur
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
