#include "main.h"

/**
 * _strncpy  - copy a string.
 * @dest: value destination.
 * @src: value source.
 * @n: copy value limit.
 *
 * Return: char value.
 */

char *_strncpy(char *dest, char *src, int n)
{
int a = 0, b = 0;
while (src[b])
{
b++;
}
while (a < n && src[a])
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
