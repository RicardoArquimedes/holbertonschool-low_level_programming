#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - functions variadic
 * @...:optional arg
 * @separator: a sep
 * @n: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list string;
	int numbers;
	unsigned int x;

	va_start(string, n);

	for (x = 0; x < n; x++)
	{
		numbers = va_arg(string, int);
	
	if (x < (n - 1) && separator != NULL)
		printf("%d%s", numbers, separator);
	else 
	{
		printf("%d", numbers);
	}
	}
	printf("\n");
	va_end(string);
}
