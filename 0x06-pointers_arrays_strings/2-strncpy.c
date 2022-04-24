#include "main.h"
/**
 *_strcat - To concatenates two strings
 *@dest: A pointer variable that point to a character variable that will be changed
 *
 *@src: A pointer variable that point to another character variable that will also be changed
 *
 *@n: The value
 *
 *Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)

{
int a;

a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}

while (a < n)
{
dest[a] = '\0';
a++;
}

return (dest);

}
