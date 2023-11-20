#include "lists.h"
/**
 * listint_len -returns number of elements in a linked listint_t list
 * @h:linked elements
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t number = 0;
while (h)
{
number++;
h = h->next;
}
return (number);
}
