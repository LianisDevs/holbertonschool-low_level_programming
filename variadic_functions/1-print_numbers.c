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

	/*check if n = 0 means no numbers were given*/
	if (n == 0)
	{
		printf("\n");
		return;
	}

	/*enable access to variadic function arguments*/
	va_start(var, n);

	/*loop through arguments less than n*/
	i = 0;
	while (i < n)
	{
		/*access the next variadic function argument*/
		num = va_arg(var, int);

		/*checks if at last argument so it doesn't print separator*/
		if (i == n - 1)
		{
			printf("%d\n", num);
			return;
		}
		/*checks if separator is null, then we don't need to print separator*/
		if (separator == NULL)
			printf("%d", num);
		else
			printf("%d%s", num, separator);
		/*increment i*/
		i++;
	}
}
