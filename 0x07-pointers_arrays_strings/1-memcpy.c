#include "main.h"

/**
 *_memcpy -   To copy number bytes form adress
 * 'from' to adress 'to'
 *@dest: content is to be copied
 *@src: The source of data to be copied
 *@n: The bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}


	return (dest);
}
