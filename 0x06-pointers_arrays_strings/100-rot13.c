#include "main.h"
/**
 * rot13 - To encodes a string using rot13
 * @s: input string.
 * Return: s.
 */

char *rot13(char *s)
{
int x = 0, j;
char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

while (*(s + x) != '\0')
{

for (j = 0; j < 52; j++)
{
if (*(s + x) == alphabets[j])
{
*(s + x) = rot13[j];
break;
}
}
x++;
}

return (s);
}
