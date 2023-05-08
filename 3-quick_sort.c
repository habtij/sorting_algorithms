#include "sort.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * swap - swaps the value of two element
 * @a: first argument
 * @b: second argument
 *
 * Return: nothing
 */
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
 * partition - sets the pivot of the array
 * @array: list to be sorted
 * @low: min index of the array
 * @high: highest index of the array
 *
 * Return: integer;
 */
int partition(int *array, int low, int high)
{
int pivot = array[high];
int j, i = low - 1;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
i++;
swap(&array[i], &array[j]);
print_array(array, high);
}
}
swap(&array[i + 1], &array[high]);
print_array(array, high);
return (i + 1);
}

/**
 * quick_sort - Quicksort is a type of divide and conquer algorithm
 * for sorting an array
 * @array: the list to be sorted
 * @size: the size of the list to be sorted
 *
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
int pivot;

if (size <= 1)
{
return;
}

pivot = partition(array, 0, size - 1);
quick_sort(array, pivot);
quick_sort(array + pivot + 1, size - pivot - 1);
}
