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
listint_t *head = NULL;
while (*list != NULL)
{
listint_t *iter = *list;
*list = (*list)->next;
if (head == NULL || (*list)->n < iter->n)
{
iter->next = head;
head = iter;
head->prev = NULL;
}
else
{
while (head != NULL)
{
if (head->next == NULL || iter->n < head->next->n)
{
iter->next = head->next;
head->next = iter;
if (head->prev != NULL)
{
head->prev = head->prev->prev;
}
print_list(*list);
break;
}
head = head->next;
}
}
}
}
