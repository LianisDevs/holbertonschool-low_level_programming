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
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

