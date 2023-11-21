#include "main.h"
/**
 * _pow_recursion - function that returns the value of x^y
 * @x : nbr
 * @y : nbr
 *Return: 1,-1,y,p
 */
int _pow_recursion(int x, int y)
{
	int p;

	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	p = x * (_pow_recursion(x, y - 1));
	return (p);
}
