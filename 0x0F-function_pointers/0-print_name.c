#include "function_pointer.h"

/**
 * print_name - prints a name.
 * @name: string of character.
 * @f: function that prints name.
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
