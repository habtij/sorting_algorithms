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
while (*list != NULL)
{
listint_t *iter = *list;
*list = (*list)->next;
while (iter != NULL && (*list)->n > iter->n)
{
(*list)->next->n = (*list)->n;
iter = iter->next;
print_list(*list);
}
(*list)->next->n = iter->n;
}
