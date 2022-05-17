#include "variadic_functions.h"

/**
 * sum_them_all -  sum all parameters
 * @n: int, number of undefined parameters
 *
 * Return: sum of parameters
 * On error, 0 is returned
 */

int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int x, sum = 0;

va_start(list, n);

if (n != 0)
for (x = 0; x < n; sum += va_arg(list, unsigned int), x++)
	;

va_end(list);

return (sum);
}
