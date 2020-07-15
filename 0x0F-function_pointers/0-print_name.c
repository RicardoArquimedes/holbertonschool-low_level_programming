#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: Name for print.
 * @f: Pointer of a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == '\0' || f == '\0')
		return;
	(*f)(name);
}
