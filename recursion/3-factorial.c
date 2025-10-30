#include "main.h"
#include <stdio.h>

/**
 * factorial - find factorial of given number
 * @n: int
 * Return: factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (n * (factorial(n - 1)));
}
