#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - To determines if n is a printable ASCII char
 * @n: an integer
 * Return: Return 1 if true, 0 if false
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex values for string b
 * in formatted form
 * @b: string to print in formated form
 * @start: The start position
 * @end: The end position
 */
void printHexes(char *b, int start, int end)
{
	int x = 0;

	while (x < 10)
	{
		if (x < end)
			printf("%02x", *(b + start + x));
		else
			printf("  ");
		if (x % 2)
			printf(" ");
		x++;
	}
}

/**
 * printASCII - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: The string to print in formated form
 * @start: The start position
 * @end: The end position
 */
void printASCII(char *b, int start, int end)
{
	int i, j = 0;

	while (j < end)
	{
		i = *(b + j + start);
		if (!isPrintableASCII(i))
			i = 46;
		printf("%c", i);
		j++;
	}
}

/**
 * print_buffer - To print a buffer
 * @b: The string
 * @size: The size of buffer
 */
void print_buffer(char *b, int size)
{
	int s, e;

	if (size > 0)
	{
		for (s = 0; s < size; s += 10)
		{
			e = (size - s < 10) ? size - s : 10;
			printf("%08x: ", s);
			printHexes(b, s, e);
			printASCII(b, s, e);
			printf("\n");
		}
	} else
		printf("\n");
}
