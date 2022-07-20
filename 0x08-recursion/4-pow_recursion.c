#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number.
 * @y: power.
 *
 * Return: -1 If y is lower than 0, values of x.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y != 0)
return (x * _pow_recursion(x, y - 1));
else
{
return (1);
}
}
