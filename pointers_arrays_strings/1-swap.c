#include "main.h"
/**
 * swap_int - swap values of two ints
 * @a: first value
 * @b: second value
 *
 * Return: nothing void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
