#include "lists.h"
/**
 * print_list- prints element of a list_t
 * @h:name of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
int number = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
number++;
h = h->next;
}
return (number);
}
