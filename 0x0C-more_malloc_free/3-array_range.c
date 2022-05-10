#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr_r, i = 0, t = min;

	if (min > max)
		return (0);
	arr_r = malloc((max - min + 1) * sizeof(int));

	if (!arr_r)
		return (0);
	while (i <= max - min)
		arr_r[i++] = t++;
	return (arr_r);
}
