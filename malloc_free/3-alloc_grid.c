#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: g,NULL
 */
int **alloc_grid(int width, int height)
{
	int **g, i, h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = (int **)malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = (int *)malloc(sizeof(int) * width);

		if (g[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			g[h][w] = 0;
	}
	return (g);
}
