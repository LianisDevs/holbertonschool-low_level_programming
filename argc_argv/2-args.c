#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed to the program
 * @argc: arg count
 * @argv: arg value
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

