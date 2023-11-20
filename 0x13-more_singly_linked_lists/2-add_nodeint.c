#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a listint_t
 * @head:pointer to te first node
 * @n: a new node
 * Return: null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
