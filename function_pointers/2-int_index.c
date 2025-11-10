#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for int
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 * Return: index of first element the cmp function doesn't return 0,
 * if no match return -1, if size <= 0 return -1
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	/**
	 * loop through each element of array to check return value of cmp
	 * if it does not equal 0 return index otherwise return -1
	 */
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}

