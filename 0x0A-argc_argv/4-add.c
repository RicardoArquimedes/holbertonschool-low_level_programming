#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number argument
 * @argv: pointer of argument
 * Return: 0 or 1(Error)
 */
int main(int argc, char *argv[])
{
	int a, b;
	int addition = 0;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			for (b = 0; *(*(argv + a) + b) != '\0'; b++)
				if (!(isdigit(*(*(argv + a) + b))))
				{
					printf("Error\n");
					return (1);
				}
			addition += atoi(*(argv + a));
		}
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
	printf("%d\n", addition);
	return (0);
}
