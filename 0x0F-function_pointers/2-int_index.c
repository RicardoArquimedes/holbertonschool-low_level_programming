#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function print a name
 * @array: pointer
 * @size: size of array
 * @cmp: Pointer of a function
 * Return: Void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array ==  '\0' || cmp == '\0')
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);	
}
