#include "lists.h"
/**
 * list_len - it is the list length
 * @h: the list to be printed
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
int list = 0;
while (h)
{
list++;
h = h->next;
}
return (list);
}
