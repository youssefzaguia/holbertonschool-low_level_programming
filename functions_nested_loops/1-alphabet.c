#include "main.h"

/**
 * print_alphabet -  prints _putchar, followed by a new line
 * Return: Always  (Success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
