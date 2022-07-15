#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: value destination.
 * @src: source destination.
 * @n: n bytes limit
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int dlen = 0, j = 0;

while (dest[dlen])
{
dlen++;
}
while (j < n && src[j])
{
dest[dlen] = src[j];
dlen++;
j++;
}
dest[dlen + n + 1] = '\0';
return (dest);
}

