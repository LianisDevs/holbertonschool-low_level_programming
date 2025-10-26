#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses contents of array of ints
 * @a: pointer to array
 * @n: size of array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;
	int temp;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;

		left++;
		right--;
	}
}

