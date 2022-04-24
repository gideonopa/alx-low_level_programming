#include "main.h"
/**
 *_strcmp - For comparing two strings
 *@s1: A pointer variable that point to a character variable that will be changed
 *
 *@s2: A pointer variable that point to another character variable that will also be changed
 *
 *Return: (*str_1 - *str_2);
 */

int _strcmp(char *s1, char *s2)

{

char *str_1 = s1;
char *str_2 = s2;


while (*str_1 != '\0' && *str_2 != '\0' && *str_1 == *str_2)
{
str_1++;
str_2++;
}

return (*str_1 - *str_2);
}
