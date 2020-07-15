#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that prints a name.
 * @array: pointers to int
 * @size: size of array
 * @action: Pointer function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t h;


	for (h = 0; h < size; h++)
		(*action)(array[h]);
}
