#include "main.h"

/**
 * _strlen - prints length of a string
 * @s: string
 * Return: int
 */
int _strlen(const char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
continue;
}
return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a converted character
 *
 * Return: the converted number: unsigned integger
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int k = 1;
unsigned int i = 0;
int c;
unsigned int len;
if (b == NULL)
return (0);
len = _strlen(b);
for  (c = len - 1; c >= 0; c--)
{
if (b[c] != '0' && b[c] != '1')
return (0);
if (b[c] == '1')
{
i += k;
}
k *= 2;
}
return (i);
}
