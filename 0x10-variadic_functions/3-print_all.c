#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_int - prints integer
 * @list: parameters from print_all
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints float
 * @list: parameters from print_all
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - prints character
 * @list: parameters from print_all
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - prints string
 * @list: parameters from print_all
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}

/**
 * print_all - prints any data_type
 * @format: parameters to print
 */

void print_all(const char * const format, ...)
{
va_list list;
int a = 0, b = 0;
char *se = "";

printTypeStruct printType[] = {
	{ "i", print_int },
	{ "f", print_float },
	{ "c", print_char },
	{ "s", print_str },
	{NULL, NULL}
};


va_start(list, format);

while (format && format[a])
{
	b = 0;
	while (b < 4)
	{
		if (*printType[b].type == format[a])
		{
			printf("%s", se);
			printType[b].printer(list);
			se = ", ";
			break;
		}
		b++;
	}
	a++;
}

printf("\n");
va_end(list);

}
