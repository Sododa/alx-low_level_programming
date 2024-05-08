#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: First node of linked list
 * This function can print lists with a loop
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t number = 0;
long int diff;
while (head)
{
diff = head - head->next;
number++;
printf("[%p] %d\n", (void *)head, head->n);
if (diff > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
return (number);
}
