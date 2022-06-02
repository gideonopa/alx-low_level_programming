#include "main.h"

/**
 * append_text_to_file - To ppends text at the end
 * of a specified file.
 * @filename: Name of the file.
 * @text_content: A NULL terminated string to add at end of file.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{

int file1, f_write, x;

if (filename == NULL)
	return (-1);

file1 = open(filename, O_APPEND | O_RDWR, 0664);
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
