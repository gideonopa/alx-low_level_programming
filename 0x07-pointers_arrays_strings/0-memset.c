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
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b; //add 1 position

	} //END FOR

	return (s);
}
