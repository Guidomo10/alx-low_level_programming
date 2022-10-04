#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: source string.
 * @accept: accept source
 *
 * Return: bytes number in the init segment.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, b, t = 0;
while (accept[a])
{
b = 0;
while (s[b] != 32)
{
if (accept[a] == s[b])
{
t++;
}
b++;
}
a++;
}
return (t);
}
