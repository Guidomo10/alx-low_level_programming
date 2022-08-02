#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *x, char *y);

/**
 * new_dog - create a new dog structure call dog_t.
 * @name: new name.
 * @age: age assigned.
 * @owner: owner to create and assigned.
 *
 * Return: pointer to new dog_t structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d;
new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
return (NULL);
if (name == NULL)
new_d->name = NULL;
else
{
new_d->name = malloc(_strlen(name) + 1);
if (new_d->name == NULL)
{
free(new_d);
return (NULL);
}
new_d->name = _strcpy(new_d->name, name);
}
if (owner == NULL)
new_d->owner = NULL;
else
{
new_d->owner = malloc(_strlen(owner) + 1);
if (new_d->owner == NULL)
{
free(new_d->name);
free(new_d);
return (NULL);
}
new_d->owner = _strcpy(new_d->owner, owner);
}
new_d->age = age;
return (new_d);
}

/**
 * _strlen - get length of string.
 * @s: string.
 * Return: length of string.
 */

int _strlen(char *s)
{
int i = 0;
for (i = 0; s[i]; i++)
;
return (i);
}

/**
 * _strcpy - copy string from y to x.
 * @x: pointer to destination of string.
 * @y: pointer to source of string.
 *
 * Return: pointer to destination.
 */

char *_strcpy(char *x, char *y)
{
char *a = x;
while (*y)
*a++ = *y++;
*a = '\0';
return (x);
}
