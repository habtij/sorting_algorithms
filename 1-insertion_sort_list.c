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
int swap = 1;

while (current != NULL)
{
listint_t *temp = current->prev;
swap = 0;
while (temp != NULL && temp->n > current->n)
{
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
swap = 1;
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
swap = 1;
}
print_list(*list);
if (swap == 0)
{
break;
}
current = current->next;
}
}
