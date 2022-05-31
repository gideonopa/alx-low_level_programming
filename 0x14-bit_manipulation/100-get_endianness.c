#include "main.h"

/**
 * get_endianness - Function that checks the endianness.
 * Return: If big-endian 0.
 * If little-endian 1.
 */

int get_endianness(void)
{
	int n = 1;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);


	return (0);
}
