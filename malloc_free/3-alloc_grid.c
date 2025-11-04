#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void free_array(int **p, int i);

/**
 * alloc_grid - creates a 2d array of ints
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to the 2d array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*mkaing memory for the pointers*/
	p = malloc(height * sizeof(int *));
	/*check malloc worked*/
	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		/*making memory for the ints*/
		p[i] = malloc(width * sizeof(int));

		/*check malloc worked*/
		if (p[i] == NULL)
		{
			free_array(p, i);
			return (NULL);
		}

		/*setting the 2nd array to 0*/
		j = 0;
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}

/**
 * free_array - frees array after malloc fails
 * @p: pointer to 2d array
 * @i: int
 * Return: nothing/ void
 */

void free_array(int **p, int i)
{
	while (i >= 0)
	{
		free(p[i]);
		i--;
	}
	free(p);
	p = NULL;
}
