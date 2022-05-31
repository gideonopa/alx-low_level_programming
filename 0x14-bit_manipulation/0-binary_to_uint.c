#include "main.h"

/**
 * binary_to_uint - To converts a binary number to unsigned integer.
 * @b: string containing the bin number.
 * Return: Converted number from bin to unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int bin_ui = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
	if (b[i] < '0' || b[i] > '1')
		return (0);
	bin_ui = 2 * bin_ui + (b[i] - '0');
	}

	return (bin_ui);
}
