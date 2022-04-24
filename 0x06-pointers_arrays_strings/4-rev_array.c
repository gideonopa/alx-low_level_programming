#include "main.h"
/**
 * reverse_array - To reverse the content of an array of integers
 * @a: an array of integers.
 *
 * @n: The number of elements of the array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)

{
int *start_c, *end_c, c;
int x;


start_c = a;
end_c = a;


for (x = 0; x < n - 1; x++)
{
end_c++;
}




for (x = 0; x < n / 2; x++)
{


c = *end_c;
*end_c = *start_c;
*start_c = c;

start_c++;
end_c--;
}

}
