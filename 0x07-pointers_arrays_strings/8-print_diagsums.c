#include <stdio.h>
#include "main.h"


/**
 * print_diagsums - To print sum of the two
 * diagonals of a square matrix integers.
 * @a: 2d array of characters.
 *@size: Matrix.
*Return: void.
 */

void print_diagsums(int *a, int size)
{
	int x;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	x = 0;
	while (x < size)
	{
		sum1 = sum1 + *(a + x * size + x);
		sum2 = sum2 + *(a + x * size + size - x - 1);
		x++;
	}

	printf("%i, %i\n", sum1, sum2);

}
