#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always (Success)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
