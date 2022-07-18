#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @c: character in the string to found
 * @s: source string
 *
 * Return: pointer to character or NULL if not found.
 */

char *_strchr(char *s, char c)
{
int a = 0, b;
while (s[a])
{
a++;
}
while (s[a])
{
if (c == s[b])
{
s += b;
return (s);
}
}
return ('\0');
}
