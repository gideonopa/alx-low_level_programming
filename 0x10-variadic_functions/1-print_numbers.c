#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers,
 * followed by a new line
 * @separator: to separe the numbers
 * @n: int, number of undefined parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int x;

va_start(list, n);

for (x = 0; x < n; x++)
{
	printf("%i", va_arg(list, int));
	if (x != n - 1 && separator != NULL)
		printf("%s", separator);
}

va_end(list);

printf("\n");

}
