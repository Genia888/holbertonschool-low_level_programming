#include "main.h"
/**
 * create_file - create a function that creates a file
 * @text_content: text content
 * @filename: name of the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, text;
	int n = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[n] != '\0')
			n++;

		text = write(file, text_content, n);

		if (text == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
