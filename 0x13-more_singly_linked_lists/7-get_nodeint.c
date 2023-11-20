#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a
 * listint_t linked list.
 * @head: first node of linked list
 * @index: is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j;
for (j = 0; j < index && head != NULL; j++)
{
head = head->next;
}
return (head);
}
