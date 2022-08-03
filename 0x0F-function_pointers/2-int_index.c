#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integger.
 * @size: number of element in the array.
 * @cmp:  pointer to the function to be used to compare values.
 *
 * Return: index of the first element for which the cmp function does not
 *  return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i, x;
if (size <= 0)
{
return (-1);
}
if (size && cmp != NULL && array != NULL)
{
for (i = 0; i < size; i++)
{
i = cmp(array[i]);
if (x != 0)
return (i);
}
}
return (-1);
}
