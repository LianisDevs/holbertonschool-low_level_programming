#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints name
 * @name: pointer to string called name
 * @f: pointer to function
 * Return: nothing/ void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
