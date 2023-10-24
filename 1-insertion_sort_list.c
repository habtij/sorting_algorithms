#include "sort.h"
#include <stddef.h>

/**
 * insertion_sort_list - sorts a list one item at a time by comparisons
 * @list: sortable list
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current = (*list)->next;

while (current != NULL)
{
listint_t *temp = current->prev;

while (temp != NULL && temp->n > current->n)
{
print_list(*list);
temp = temp->prev;
}
if (temp == NULL)
{
/* insert at the beginning of list */
current->prev->next = current->next;
if (current->next != NULL)
{
current->next->prev = current->prev;
}
current->prev = NULL;
current->next = *list;
(*list)->prev = current;
*list = current;
}
else
{
/* insert after temp */
current->prev->next = current->next;
if (current->next != NULL)
{
current->next->prev = current->prev;
}
current->prev = temp;
current->next = temp->next;
if (temp->next != NULL)
{
temp->next->prev = current;
}
temp->next = current;
}
current = current->next;
}
}
