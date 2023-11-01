#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square
 * @size: integer
 * Return: void (Success) .
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
