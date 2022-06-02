#include "main.h"

/**
 * create_file - To creates a file.
 *
 * @filename: Name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
int file1, f_write, x;

if (filename == NULL)
	return (-1);

file1 = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (file1 == -1)
	return (-1);

if (text_content != NULL)
{
	for (x = 0; text_content[x]; x++)
		;
	f_write = write(file1, text_content, x);
	if (f_write == -1)
		return (-1);
}

close(file1);
return (1);
}
