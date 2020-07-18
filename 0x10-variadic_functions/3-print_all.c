#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints strings, followed by a new line.
 * @format: "cifs"
 * @...: opcional arg.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int d = 0;
	char *S;

	va_start(ap, format);
	while (format && format[d])
	{
		switch (format[d++])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			S = va_arg(ap, char*);
			if (S == NULL)
			{
				S = "(nil)";
			}
			printf("%s", S);
			break;
		default:
			continue;
		}
		if (format[d])
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(ap);
}
