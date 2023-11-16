#include "lists.h"
/**
 * free_list - the free list
 * @head: the beginning of a pointer
 */
void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
}
