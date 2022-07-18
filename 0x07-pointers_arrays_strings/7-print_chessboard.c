#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array.
 * Return: chessboard.
 */

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; a[i][7]; i++)
{
for (i = 0; a[i][7]; i++)
_putchar(a[i][j]);
_putchar('\n');
}
}

