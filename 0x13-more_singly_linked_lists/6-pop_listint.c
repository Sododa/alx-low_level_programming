#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: First node of linked list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
int node;
listint_t *h;
listint_t *curr;
if (*head == NULL)
return (0);
curr = *head;
node = curr->n;
h = curr->next;
free(curr);
*head = h;
return (node);
}
