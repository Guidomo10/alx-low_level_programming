#include "lists.h"

/**
 * list_len - give number of elements in a linked list_t list.
 * @h: linked list
 * Return: number of element in a linked list
 */

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
