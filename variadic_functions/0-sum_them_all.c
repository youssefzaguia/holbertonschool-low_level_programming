#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: numb
 * Return: 0, sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0, num;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		sum += num;
	}
	va_end(ap);

	return (sum);
}
