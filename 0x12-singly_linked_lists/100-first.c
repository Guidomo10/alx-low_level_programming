#include <stdio.h>"

void print_first(void) _attribute_ ((constructor));

/**
 * print_first - prints two strings of character before main
 *
 * Return: void
 */

void print_first(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
