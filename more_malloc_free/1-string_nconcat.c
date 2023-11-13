#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string to copy it
 * @s2: string to copy it
 * @n: int
 * Return: m
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	int s, i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = strlen(s1);
	s = s + n;

	m = (char *)malloc(sizeof(char) * (s + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		m[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		m[i] = s2[j];
		i++;
	}
	m[i] = '\0';
	return (m);
	free(m);
}
