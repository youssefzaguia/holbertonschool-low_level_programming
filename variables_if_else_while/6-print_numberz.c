#include <stdio.h>
/**
 *main-  prints all single digit numbers of base 10 starting from 0
 *Return: 1
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
