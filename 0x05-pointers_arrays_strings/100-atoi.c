#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * return: int
 */

int _atoi(char *s)
{
int i, j, n, x;
i = n = 0;
x = 1;
while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
{
if (s[i] == '-')
x *= -1;
i++;
}
j = 1;
while ((s[j] >= '0') && (s[j] <= '9'))
{
n = (n * 10) + x * ((s[j]) - '0');
j++;
}
}
