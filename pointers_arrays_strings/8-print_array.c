#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of ints
 * @a: pointer to array
 * @n: number of elements to print
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
