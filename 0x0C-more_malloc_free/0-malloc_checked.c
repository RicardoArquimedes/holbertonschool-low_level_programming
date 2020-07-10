#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: int the array
 * Return: (C)
 */
void *malloc_checked(unsigned int m)
{
	void *C;

	C = malloc(m);
	if (C == '\0')
		exit(98);
	return (C);
}
