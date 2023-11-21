#include "main.h"
/**
 * check - checks prime
 * @n: integer
 * @x: integer
 * Return: 1,0
 */
int check(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (check(n, x + 1));
}
/**
 * is_prime_number - function that check if is a prime number
 * @n: integer
 * Return: 0,1
 */
int is_prime_number(int n)
{
		return (check(n, 2));
}
