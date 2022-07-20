#include "main.h"

/**
 * _checks - checks if an integger can have a square root.
 * @m: int
 * @p: int
 *
 * Return: results of check.
 */

int _checks(int m, int p)
{
if (m * m == p)
return (m);
if (m * m > p)
return (-1);
return (_checks(m + 1, p));
}


/**
 * _sqrt_recursion - gives the natural square root of a number.
 * @n: natural number.
 * Return: square root of a number.
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (_checks(1, n));
}
