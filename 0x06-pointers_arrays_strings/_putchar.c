/**
 * _putchar - To write the character c into standard output.
 * @c: The character to print
 *
 * Return: On success 1.
 *
 * On error, -1, and  error is set
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
