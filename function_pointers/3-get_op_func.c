#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - checks if s matches element in ops array
 * @s: operator to check if in ops array
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (s[0] == ops[i].op[0])
			break;
		i++;
	}
	return (ops[i].f);
}
