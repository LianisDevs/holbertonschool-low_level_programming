#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: arg count
 * @argv: arg value
 * Return: 0 to show success
 */

int main(int argc, char *argv[])
{
	int num1, num2, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	sum = num1 * num2;

	printf("%d\n", sum);

	return (0);
}
