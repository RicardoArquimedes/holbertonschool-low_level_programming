#include <stdlib.h>
/**
 * _strdup -function
 * @str: character
 * Return: (S)
 */
char *_strdup(char *str)
{
	int a = 0;
	int b;
	char *S;

	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	S =  malloc(a + 1);
	if (S == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		S[b] = str[b];
	S[b] = '\0';
	return (S);
}
