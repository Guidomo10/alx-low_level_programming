#include "main.h"

/**
 * get_bit - give the the value of a bit at a given index.
 * @n: unsigned long integger
 * @index: index of a bit we want to get.
 *
 * Return: the value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (sizeof(n) * 8 < index)
return (-1);
n >>= index;
if ((n & 1) == 1)
return (1);
else
return (0);
}
