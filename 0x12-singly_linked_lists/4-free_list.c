#include "lists.h"
/**
 * free_list - the free list
 * @head: the beginning of a pointer
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}
