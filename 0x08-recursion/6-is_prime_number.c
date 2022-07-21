#include "main.h"

/**
 * _checks - checks if an input integgeris a prime number.
 * @m: integger.
 * @p: integger.
 *
 * Return: checks of an integger.
 */

int _checks(int m, int p)
{
if (p < 2 || p % m == 0)
return (0);
else if (m > p / 2)
return (1);
else
return (_checks(m + 1, p));
}

/**
 * is_prime_number -  returns a prime numbers.
 * @n: input integger.
 * Return:  returns 1 for prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
if (n == 2)
return (1);
return (_checks(2, n));
}
