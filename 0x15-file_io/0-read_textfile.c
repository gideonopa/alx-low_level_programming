#include "main.h"

/**
 * read_textfile - To reads a text file and prints
 * it to the POSIX standard output
 * @filename: A pointer to text in a file
 * @letters: number of letters
 * Return: Actual number of letters it could read and print to stdout
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file1, f_read, f_write;
char *total_Size;

total_Size = malloc(sizeof(char) * letters);
if (total_Size == NULL)
	return (0);
if (filename == NULL)
	return (0);

file1 = open(filename, O_RDONLY);
if (file1 == -1)
	return (0);
f_read = read(file1, total_Size, letters);
if (f_read == -1)
	return (0);

f_write = write(STDOUT_FILENO, total_Size, f_read);
if (f_write == -1)
	return (0);
close(file1);

free(total_Size);
return (f_write);
}
