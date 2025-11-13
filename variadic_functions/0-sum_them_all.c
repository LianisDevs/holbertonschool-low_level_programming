#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - function that returns sum of all parameters
 * @n: number of parameters
 * Return: sum or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list var;

	if (n == 0)
		return (0);

	va_start(var, n);

	i = 0;
	while (i < n)
	{
		sum += va_arg(var, int);
		i++;
	}

	return (sum);
}
