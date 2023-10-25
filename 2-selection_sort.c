#include "sort.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * selection_sort - it's an in-place comparison sorting algorithm
 * @array: list of element to sort
 * @size: size of list to be sorted
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
int temp;
size_t i, j, min;

for (i = 0; i < size; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
{
min = j;
}
}

if (min != i)
{
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}
}
}
