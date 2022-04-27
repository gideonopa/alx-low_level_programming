#include <unistd.h>

/**
 * _putchar - To write the character c to standard output
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1, and errno is then set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
