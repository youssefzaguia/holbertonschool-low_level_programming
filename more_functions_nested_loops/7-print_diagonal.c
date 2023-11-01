#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line
 * on the terminal.
 * @n: The number of \
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
			putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
