#include "main.h"
/**
 * cap_string - To capitalize all words of a string
 * @s: input string.
 * Return: s.
 */


char *cap_string(char *s)
{
int x = 0, j;
int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

if (*(s + x) >= 97 && *(s + x) <= 122)
*(s + x) = *(s + x) - 32;
x++;
while (*(s + x) != '\0')
{
for (j = 0; j < 13; j++)
{
if (*(s + x) == sep[j])
{
if ((*(s + (x + 1)) >= 97) && (*(s + (x + 1)) <= 122))
*(s + (x + 1)) = *(s + (x + 1)) - 32;
break;
}
}
x++;
}
return (s);
}
