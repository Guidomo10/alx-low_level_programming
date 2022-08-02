#include "dog.h"
#include <stdio.h>

/**
 * init_dog -  initialize a variable of type struct dog.
 * @d: pointer of structure dog.
 * @name: pointer to a string.
 * @age: float.
 * @owner: poiter to a string.
 *
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
