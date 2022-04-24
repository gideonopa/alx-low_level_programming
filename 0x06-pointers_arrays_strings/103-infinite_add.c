#include "main.h"
#include <stdio.h>
/**
 * infinite_add - For adding two numbers
 * @n1: first number.
 * @n2: second number.
 * @r: is buffer that the function will use to store the result.
 * @size_r: is the buffer size:
 * Return: r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, op, bg, dir1, dir2, sum = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		bg = a;
	else
		bg = b;
	if (size_r <= bg + 1)
		return (0);
	r[bg + 1] = '\0';
	a--, b--, size_r--;
	dir1 = *(n1 + a) - 48, dir2 = *(n2 + b) - 48;
	while (bg >= 0)
	{
		op = dir1 + dir2 + sum;
		if (op >= 10)
			sum = op / 10;
		else
			sum = 0;
		if (op > 0)
		*(r + bg) = (op % 10) + 48;
		else
			*(r + bg) = '0';
		if (a > 0)
			a--, dir1 = *(n1 + a) - 48;
		else
			dir1 = 0;
		if (b > 0)
			b--, dir2 = *(n2 + b) - 48;
		else
			dir2 = 0;
		bg--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
