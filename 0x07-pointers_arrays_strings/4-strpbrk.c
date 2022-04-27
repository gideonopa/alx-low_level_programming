#include "main.h"

/**
 * _strpbrk - To matche any specified character
 * @s: The C string to be scanned.
 * @accept: If character in str1 that matches
 * one of the characters in str2 text.
 *Return: The string s that matches
 * any specified character in accept.
 **/

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (*s == accept[x])
			{
				return (s);
			}

			x++;
		}

		s++;
	}
	return (0);

}
