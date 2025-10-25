#include "main.h"
/**
 * rev_string - changes string to be in reverse order
 * @s: pointer to string
 * Return: nothing
 */

void rev_string(char *s)
{
	char *start_ptr = s;
	char *end_ptr = s;
	char temp;

	if (*s == '\0')
	{
		return;
	}

	while (*end_ptr != '\0')
	{
		end_ptr++;
	}
	end_ptr--;

	while (start_ptr < end_ptr)
	{
		temp = *start_ptr;
		*start_ptr = *end_ptr;
		*end_ptr = temp;
		
		start_ptr++;
		end_ptr--;	
	}
}
