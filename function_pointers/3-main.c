#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 * @argc: arg counter
 * @argv: arg values
 * Return: int
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator = argv[2];
	int result;

	int (*fptr)(int, int);

	/*checking if correct number if arguments entered*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fptr = get_op_func(operator);
	/*checking if get_op_func didn't find a matching operator*/
	if (fptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/*checking if user trying to divide or mod by zero*/
	if ((num2 == 0) && (strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = fptr(num1, num2);

	printf("%d\n", result);

	return (0);
}
