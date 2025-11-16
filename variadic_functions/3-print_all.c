#include "variadic_functions.h"
#include <stdio.h>

int (*get_printer(char format))(va_list);
int print_char(va_list var);
int print_int(va_list var);
int print_float(va_list var);
int print_string(va_list var);

/**
 * print_all - function that checks format and prints
 * @format: string of formats given to function
 * Return: nothing/void
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list var;

	int (*fptr)(va_list);

	va_start(var, format);

	i = 0;
	while (format != NULL && format[i])
	{
		fptr = get_printer(format[i]);
		if (fptr != NULL && fptr(var) == 0 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * get_printer - matches format to element in symbol array
 * @format: character in format string to check if in symbol array
 * Return: function pointer
 */
int (*get_printer(char format))(va_list)
{
	int j;

	printer_t symbol[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	j = 0;
	while (symbol[j].arg != NULL && format != symbol[j].arg[0])
	{
		j++;
	}
	return (symbol[j].f);
}

/**
 * print_char - print char
 * @var: variadic list contatining the argument to print
 * Return: int 0 to show success
 */
int print_char(va_list var)
{
	printf("%c", va_arg(var, int));
	return (0);
}

/**
 * print_int - print int
 * @var: variadic list containing the argument to print
 * Return: int 0 to show success
 */

int print_int(va_list var)
{
	printf("%d", va_arg(var, int));
	return (0);
}

/**
 * print_float - print float
 * @var: variadic list containing the argument to print
 * Return: int 0 to show success
 */

int print_float(va_list var)
{
	printf("%f", va_arg(var, double));
	return (0);
}

/**
 * print_string - print string
 * @var: variadic list containing the argument to print
 * Return: int 0 to show success
 */
int print_string(va_list var)
{
	char *string;

	string = va_arg(var, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", string);
	return (0);
}
