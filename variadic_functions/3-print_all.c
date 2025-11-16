#include "variadic_functions.h"
#include <stdio.h>

void get_printer(char format, va_list var);
void print_char(va_list var);
void print_int(va_list var);
void print_float(va_list var);
void print_string(va_list var);


void print_all(const char * const format, ...)
{
	int i;
	va_list var;

	va_start(var, format);

	i = 0;
	while (format[i] != '\0' && format[i + 1] != '\0')
	{
		get_printer(format[i], var);
		printf(", ");
		i++;
	}
	get_printer(format[i], var);
	printf("\n");
}

void get_printer(char format, va_list var)
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
	while (symbol[j].arg != NULL)
	{
		if (format == symbol[j].arg[0])
		{
			symbol[j].f(var);
			break;
		}
		j++;
	}
}

void print_char(va_list var)
{
	printf("%c", va_arg(var, int));
}

void print_int(va_list var)
{
	printf("%d", va_arg(var, int));
}

void print_float(va_list var)
{
	printf("%f", va_arg(var, double));
}

void print_string(va_list var)
{
	char *string;

	string = va_arg(var, char *);

	if (*string == '\0')
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
