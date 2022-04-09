#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print the lowercase alphabet except e and q
 * Return: 0
 */
int main(void)
{
int c;

for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'e' && c != 'q')
putchar(c);
}

putchar('\n');

return (0);
}
