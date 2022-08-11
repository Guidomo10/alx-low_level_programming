#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the list
 * Return: void
 */

void free_list(list_t *head)
{
list_t *check, *c;
c = head;
while (c != NULL)
{
check = c->next;
free(c->str);
free(c);
c = check;
}
}
