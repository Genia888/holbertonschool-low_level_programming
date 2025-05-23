#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: NULL-terminated string to add to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int file, text;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		text = write(file, text_content, i);

		if (text == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
