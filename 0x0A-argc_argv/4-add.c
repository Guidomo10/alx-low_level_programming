#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: integger.
 * @argv: string.
 *
 * Return: 0 If no number is passed to the program, or 1 If one of the number
 * contains symbols that are not digits.
 */

int main(int argc, char *argv[])
{
int p = 0, m, n;
for (m = 1; m < argc; m++)
{
for (n = 0; argv[m][n]; n++)
{
if (isdigit(argv[m][n]) == 0)
{
printf("Error\n");
return (1);
}
}
}
for (m = 1; m < argc; m++)
{
p += atoi(argv[m]);
}
printf("%d\n", p);
return (0);
}
