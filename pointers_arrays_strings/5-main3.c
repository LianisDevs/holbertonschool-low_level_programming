#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "Hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("I've escape strstr\n");
    printf("%s\n", t);

    return (0);
}
