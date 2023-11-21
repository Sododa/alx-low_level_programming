#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: First node of linked list
 *
 *  Return: address of the node where the loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *p4;
listint_t *prev;
p4 = head;
prev = head;
while (head && p4 && p4->next)
{
head = head->next;
p4 = p4->next->next;
if (head == p4)
{
head = prev;
prev =  p4;
while (1)
{
p4 = prev;
while (p4->next != head && p4->next != prev)
{
p4 = p4->next;
}
if (p4->next == head)
break;
head = head->next;
}
return (p4->next);
}
}
return (NULL);
}
