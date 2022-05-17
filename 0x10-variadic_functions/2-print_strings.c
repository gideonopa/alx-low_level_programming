#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings,
 * followed by a new line
 * @separator: separate the strings
 * @n: int, number of undefined arguments.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int x;
char *ch;

va_start(list, n);

for (x = 0; x < n; x++)
{
	ch = va_arg(list, char*);
	if (ch != NULL)
		printf("%s", ch);
	else
		printf("(nil)");

	if (x != n - 1 && separator != NULL)
		printf("%s", separator);
}

va_end(list);
printf("\n");

}
