#include "main.h"

/**
 * main - It copies the content of a file to another file.
 *
 * @argc: number of arguments passed in the terminal.
 * @argv: double pointer.
 *
 * Return: the actual number of letters
 * it could read and print to stdout.
 */

int main(int argc, char **argv)
{
int fi1, fi2, numb;
char buf1[1024];

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
fi1 = open(argv[1], O_RDONLY);
if (fi1 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
fi2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
while ((numb = read(fi1, buf1, 1024)) > 0)
{
	if (write(fi2, buf1, numb) != numb || fi2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
if (numb == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
if (close(fi1) < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fi1);
	exit(100);
}
if (close(fi2) < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fi2);
	exit(100);
}
return (0);
}
