#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_file - function will create a file
 * @filename:  name of file to be created
 * @text_content: text to be written in new file
 * Return: function will return 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, a = 0, n_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[a] != '\0')
		a++;
	n_write = write(fd, text_content, a);
	if (n_write == -1)
		return (-1);
	return (1);
}
