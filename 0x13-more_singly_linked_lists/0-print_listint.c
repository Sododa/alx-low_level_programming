#include "lists.h"
/**
 * print_listint - a function prints all elements in listint_t list
 * @h: the file that will be used
 * Return: Null
 */
size_t print_listint(const listint_t *h)
{
size_t number = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
number++;
}
return (number);
}
