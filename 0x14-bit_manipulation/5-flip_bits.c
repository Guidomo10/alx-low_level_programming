#include "main.h"

/**
 * flip_bits - gives the number of bits you would need to flip to get from
 *  one number to another.
 *  @n: unsigned long integger
 *  @m: unsigned long integger
 *
 *  Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int t;
int i = 0;
t = n ^ m;
while (t >= 1)
{
if ((t & 1) == 1)
i++;
t >>= 1;
}
return (i);
}

