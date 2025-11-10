#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function (from param) on each element of array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to function
 * Return: nothing/ void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int i;

	/*loop through each element of the array and execute function*/
	i = 0;
	while (i < size)
		action(array[i++]); /*code will be read as i then it does ++ */
}
