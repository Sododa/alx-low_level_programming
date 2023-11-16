#include "lists.h"
/**
 * _strlen - string length to be determined
 * @str: string calculated
 * Return: string length
 */
unsigned int _strlen(char *str)
{
unsigned int j;
for (j = 0; str[j]; j++)
;
return (j);
}
/**
 * add_node_end -adds a new node at the end of a list_t
 * @head:the first pointer address
 * @str:string
 * Return:the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = _strlen(new->str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
