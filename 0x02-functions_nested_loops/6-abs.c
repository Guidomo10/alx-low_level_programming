#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @l: computed integer.
 *
 * Return: absolute value of number or 0.
 */

int _abs(int l)
{
if (l < 0)
{
int abs_val;
abs_val = l * -1;
return (abs_val);
}
return (l);
}
