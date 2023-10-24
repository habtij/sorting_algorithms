#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - repeatedly steps through a list element by element,
 * comparing the current element with the one after it, swapping their
 * values if needed.
 * @array: list item to be sorted
 * @size: size of the array to be sorted
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp, swaps;

for (i = 0; i < size; i++)
{
swaps = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
swaps = 1;
print_array(array, size);
}
}
if (swaps == 0)
{
break;
}
}
}
