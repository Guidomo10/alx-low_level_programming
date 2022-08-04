#include "3-calc.h"

/**
 * op_add - adds two integgers.
 * @a: integger.
 * @b: integger.
 *
 * Return: sum of two integger
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtraction of two integgers.
 * @a: integger.
 * @b: integger.
 *
 * Return: result.
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplie two integger.
 * @a: integger.
 * @b: integger.
 *
 * Return: result.
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division of two integger.
 * @a: integger.
 * @b: integger.
 *
 * Return: result.
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - the remainder of the division of two integgers.
 * @a: integger.
 * @b: integger.
 *
 * Return: result.
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
