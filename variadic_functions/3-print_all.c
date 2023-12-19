#include "variadic_functions.h"
/**
 * print_char - print a character
 * @args: list of characters arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - print an integer
 * @args: list of integers arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - print a float number
 * @args: list of float numbers arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - print a string
 * @args: list of string arguments
 */
void print_string(va_list args)
{
	char *ch = va_arg(args, char *);

	if (ch == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ch);
}
/**
 * print_all - function that prints anything
 * @format: format of arguments
 */
void print_all(const char *const format, ...)
{
	int i = 0, j;
	char *sep1 = "", *sep2 = ", ";
	va_list args;

	types types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL},
	};
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if (format[i] == types[j].type)
			{
				printf("%s", sep1);
				types[j].f(args);
				sep1 = sep2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
