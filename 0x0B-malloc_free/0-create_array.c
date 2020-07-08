#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size  of the array
 * @c: character
 * Return: (A)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int y;
	char *A;

	if (size == 0)
	{
		return (NULL);
	}
	A =  malloc(sizeof(c) * size);
	if (A == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		A[y] = c;
	}
	return (A);
}
