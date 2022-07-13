#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int x, b;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (x = 0, add = 0; x < len; x++)
		add += argv[1][x];
	p[1] = l[(add ^ 79) & 63];
	for (x = 0, b = 1; x < len; x++)
		b *= argv[1][x];
	p[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], x = 0; x < len; x++)
		if ((char)b <= argv[1][x])
			b = argv[1][x];
	srand(b ^ 14);
	p[3] = l[rand() & 63];
	for (b = 0, x = 0; x < len; x++)
		b += argv[1][x] * argv[1][x];
	p[4] = l[(b ^ 239) & 63];
	for (b = 0, x = 0; (char)x < argv[1][0]; x++)
		b = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
