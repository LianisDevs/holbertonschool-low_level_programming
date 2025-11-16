#include "variadic_functions.h"
#include <stdio.h>

int (*get_printer(char format))(va_list);
int print_char(va_list var);
int print_int(va_list var);
int print_float(va_list var);
int print_string(va_list var);


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

int print_char(va_list var)
{
	printf("%c", va_arg(var, int));
	return (0);
}

int print_int(va_list var)
{
	printf("%d", va_arg(var, int));
	return (0);
}

int print_float(va_list var)
{
	printf("%f", va_arg(var, double));
	return (0);
}

int print_string(va_list var)
{
	char *string;

	string = va_arg(var, char *);

	if (*string == '\0')
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", string);
	return (0);
}
