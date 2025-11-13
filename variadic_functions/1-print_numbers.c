#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: number of ints passed to function
 * Return: nothing/void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list var;

	va_start(var, n);

	i = 0;
	while (i < n)
	{
		num = va_arg(var, int);

		if (i == n - 1)
		{
			printf("%d\n", num);
			break;
		}

		printf("%d%s", num, separator);
		i++;
	}
}
