#include "main.h"
/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n : nbr
 *Return:verief
 */
int _sqrt_recursion(int n)
{
	return (verief(n, 1));
}

/**
 *verief - function that verief the square of x
 *@n : nbr
 *@x: nbr
 *Return:x,s,-1
 */
int verief(int n, int x)
{
	int s;

	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		s = verief(n, x + 1);
		return (s);
	}
	else
		return (-1);
}
