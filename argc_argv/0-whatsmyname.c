#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: arg count
 * @argv: arg value
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}

