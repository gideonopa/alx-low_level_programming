#include "main.h"
/**
 *_strncat - To concatenates two strings
 *@dest: A pointer that point to a variable that will be changed
 *
 *@src: A pointer that point to another variable that will be changed
 *
 *@n: the value
 *Return: dest.
 */

char *_strncat(char *dest, char *src, int n)

{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}

dest[a] = '\0';

return (dest);
}
