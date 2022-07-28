#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: integger.
 * @argv: string.
 *
 * Return: integger.
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
