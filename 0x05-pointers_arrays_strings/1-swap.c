#include "main.h"

/**
 * swap_integer - swap 2 integer using a pointer
 * @a: integer
 * @b: integer
 * return: void
 */

void swap_integer(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
return;
}

