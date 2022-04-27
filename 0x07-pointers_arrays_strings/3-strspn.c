#include "main.h"


/**
 * _strspn - To locates a character in a string
 * @s: The main C string to be scanned.
 * @accept: The string containing the list of
 * characters to match in string s
 * Return: return count.
 **/

unsigned int _strspn(char *s, char *accept)

{
	int a, b;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	a = 0;
	while (str1[a] != '\0')
	{
		b = 0;
		while (str2[b] != '\0')
		{
			if (str2[b] == str1[a])
			{
				count++;
				break;
			}

			b++;
		}

		if (s[a] != accept[b])
		{
			break;
		}

		a++;
	}

	return (count);
}
