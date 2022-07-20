#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number
 * Return: -1 for error, 1 for 0, int.
 */

int factorial(int n)
{
int x;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
x = n * factorial(n - 1);
}
return (x);
}
