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
do {
if (*s == c)
{
break;
}
} while (*s++);
return (s);
}

