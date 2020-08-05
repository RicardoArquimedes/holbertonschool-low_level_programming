#include "holberton.h"
/**
 * read_textfile - function that reads a text file and
 *  prints it to the POSIX standard output.
 * @filename: Path of the file
 * @letters:  is the number of letters it should read and print
 *
 * Return: number of character to print otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, aux = 1, len = 1;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY | O_EXCL);
	if (fd != -1)
		len = read(fd, buffer, letters);
	else
		len = 0;
	buffer[letters] = '\0';

	aux = write(STDOUT_FILENO, buffer, len);

	if (aux == -1)
		len = 0;

	close(fd);
	free(buffer);
	return (len);
}
