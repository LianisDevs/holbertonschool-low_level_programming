#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the 2 diagonals of a matrix
 * @a: pointer to array
 * @size: size of matrix (rows)
 * Return: nothing void
 */

void print_diagsums(int *a, int size)
{
	int i, j, l_diag, r_diag;

	l_diag = 0;
	r_diag = 0;

	for (i = 0; i < size; i++)
	{
		l_diag += *(a + i);
		a += size;
	}

	a -= size * size;

	for (j = size - 1; j >= 0; j--)
	{
		r_diag += *(a + j);
		a += size;
	}
	printf("%d, %d\n", l_diag, r_diag);

}
