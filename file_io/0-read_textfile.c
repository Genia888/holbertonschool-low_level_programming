#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename : name of the file
 * @letters : letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int file;
	size_t n;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	buffer = malloc(letters + 1);

	if (buffer == NULL)
		return (0);

	n = read(file, buffer, letters);

	write(STDOUT_FILENO, buffer, n);
	close(file);
	return (n);
}
