#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nothing/ void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list var;

	/*enables access to variadic function arguments*/
	va_start(var, n);

	i = 0;
	while (i < n)
	{
		/*access the next variadic function argument*/
		string = va_arg(var, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		i++;

		if (i != n)
			printf("%s", separator);
	}
	printf("\n");
}
