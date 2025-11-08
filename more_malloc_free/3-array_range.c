#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array on ints
 * @min: first number in array
 * @max: last number in array
 * Return: pointer to new array or NULL if it failed
 */

int *array_range(int min, int max)
{
	int *p;
	int length, i;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	p = malloc(length * sizeof(int));

	if (p == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
