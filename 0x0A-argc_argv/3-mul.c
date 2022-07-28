#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: integger.
 * @argv: string.
 *
 * Return: integger or error if programm doesn't receive two arguments.
 */

int main(int argc, char *argv[])
{
int p, m, n;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
m = atoi(argv[1]);
n = atoi(argv[2]);
p = m * n;
printf("%d\n", p);
}
return (0);
}
