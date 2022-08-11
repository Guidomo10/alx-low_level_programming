#include "lists.h"

/**
 * _strlen - length of string
 * @s: character
 * Return: integger
 */

unsigned int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
continue;
}
return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the line of the list
 * @str: pointer to a string of list
 *
 * Return: the node or the the address of the new elementat the end of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *last;
if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = _strlen(new->str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
last = *head;
while (last->next)
{
last = last->next;
}
last->next = new;
}
return (new);
}
