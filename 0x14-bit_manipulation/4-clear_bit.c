#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to a given index
 * @index: index of bit we want to set
 *
 * Return:  if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int x = 1;
if (sizeof(n) * 8 < index)
return (-1);
x <<= index;
*n &= ~x;
return (1);
}
