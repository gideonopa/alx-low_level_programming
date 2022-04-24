#include "main.h"
/**
 *_strcat - To concatenates two strings
 *@dest: A pointer that point to a character variable that will be changed
 *
 *@src: A pointer that point to another variable that will changed
 *
 *Return: dest.
 */

char *_strcat(char *dest, char *src)
{
int a, b;

a = 0;
while (dest[a] != '\0')
{
a++;
}

b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
b++;
a++;
}
dest[a] = '\0';

return (dest);
}
