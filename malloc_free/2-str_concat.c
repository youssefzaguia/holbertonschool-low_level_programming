#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 * given as a parameter
 * @s1: string to copy
 * @s2: string to copy
 * Return: n
 */
char *str_concat(char *s1, char *s2)
{
	char *n;
	int s, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = strlen(s1) + strlen(s2);

	n = (char *)malloc(sizeof(char) * (s + 1));

	if (n == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		n[i] = s1[i];
	}

	for (j = 0; s2[j]; j++)
	{
		n[i] = s2[j];
		i++;
	}
	n[i] = '\0';

	return (n);

	free(n);
}
