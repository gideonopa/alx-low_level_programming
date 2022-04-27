#include "main.h"

/**
 * _strstr - The first occurrence of the substring
 * needle in haystack
 * @haystack: The main string to be checked
 * @needle: searched needle in haystack
 * Return: 0.
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack != '\0')
	{
		s1 = haystack;
		s2 = needle;

		while (*haystack != '\0' && *s2 != '\0' && *haystack == *s2)
		{
			haystack++;
			s2++;
		}
		if (*s2 == '\0')
			return (s1);
		haystack = s1 + 1;
	}
	return (0);
}
