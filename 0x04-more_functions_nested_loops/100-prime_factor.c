  
#include <stdio.h>
/**
 * main - find and print largest number of 612852475143
 * Return: 0 (Sucess)
 */
int main(void)
{
	long int l;
	int d;

	l = 612852475143;
	d = 2;
	while (l != 0)
	{
		if ((l % d) != 0)
		{
			l += 1;
		}
		else
		{
			l = l / d;
			if (l == 1)
			{
				printf("%d", d);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
