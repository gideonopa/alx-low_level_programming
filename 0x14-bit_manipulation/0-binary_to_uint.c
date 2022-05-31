#include "main.h"

/**
 * binary_to_uint - To converts a binary number to unsigned integer.
 * @b: string containing the bin number.
 * Return: Converted number from bin to unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin_ui;
	int x, bin_2;

	if (!b)
		return (0);

	bin_ui = 0;

	for (x = 0; b[x] != '\0'; x++)
		;

	for (x--, bin_2 = 1; x >= 0; x--, bin_2 *= 2)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}

		if (b[x] & 1)
		{
			bin_ui += bin_2;
		}
	}

	return (bin_ui);
}
