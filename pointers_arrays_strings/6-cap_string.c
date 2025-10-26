#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * Return: pointer to updated string
 */

char *cap_string(char *);
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if ((i == 10) || (i == 32) || (i== 33) || (i == 34) || (i == 40) || (i == 41) || (i == 123) || (i == 125)

//check if separator for word
//check if capitalized all ready- do nothing 
//change lowercase to uppercase using -32 to get capital 
//
