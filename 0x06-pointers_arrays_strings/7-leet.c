#include "main.h"
/**
 * leet - For encoding a string into 1337
 * @s: input string.
 * Return: s.
 */

char *leet(char *s)
{
int x = 0, j;
int lower_case[] = {97, 101, 111, 116, 108};
int upper_case[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};


while (*(s + x) != '\0')
{
for (j = 0; j < 5; j++)
{
if (*(s + x) == lower_case[j] || *(s + x) == upper_case[j])
{
*(s + x) = numbers[j];
break;
}
}
x++;
}

return (s);
}
