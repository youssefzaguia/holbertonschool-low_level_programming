#include "main.h"

/**
 * _isalpha -  prints if alpha, followed by a new line
 * Return: Always 0 (Success)
 * @c : integer
 */

int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
