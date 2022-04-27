#include "main.h"

/**
 *_memset -   To fill the memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: character value to set
 *@n: unsigned integer bytes of the memory
 *Return: dest.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;

	} 

	return (s);
}
