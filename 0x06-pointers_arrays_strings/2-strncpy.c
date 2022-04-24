#include "main.h"
/**
 *_strncpy - To coppy strings
 *@dest: A pointer that point to a variable that will be changed
 *
 *@src: A pointer that point to a variable that will  be changed
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
