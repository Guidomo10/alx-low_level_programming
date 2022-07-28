#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *  contains a copy of the string given as a parameter.
 *  @str: string.
 *  Return: character.
 */

char *_strdup(char *str)
{
char *s;
int i, l = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
l++;
s = malloc(sizeof(char) * (l + 1));
if (s == NULL)
return (NULL);
for (i = 0; str[i]; i++)
s[i] = str[i];
s[l] = '\0';
return (s);
}
