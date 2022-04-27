#include "main.h"


/**
 * _strchr - To locates a character in a string
 * @s: the string.
 * @c: Character to locate.
 * Return: Pointer to the first occurrence of
 * the character c in the string s.
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
