#include "sort.h"

/**
 * _partition - partitions the array to a pivot point. Compares them and
 *  partitions.
 * @array: to be partitioned.
 * @start: begining of array.
 * @size:  the size of the array.
 * Return: the place of the pivot.
 */
size_t partition(int array[], int start, size_t size)
{
    size_t pivot = array[size], j, temp;

    for(j = start; j <= size; j++)
    {
        if (array[j] <= pivot)
        {
            temp = array[start];
            array[start] = array[j];
            array[j] = temp;
            start++;
        }
                
    }
    /*temp = array[start];
    array[start] = array[size];
    array[size] = temp;
    /*print_array(array, size);*/
    return (start - 1);
}
/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @start: Beginning of array.
 * Description: Uses the Lomuto partition scheme.
 */
void lomuto_sort(int *array, int start, size_t size)
{
	int part;

	if (start < size)
	{
		part = partition(array, start, size);
		lomuto_sort(array, start, part - 1);
		lomuto_sort(array, part + 1, size);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending
 *              order using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Uses the Lomuto partition scheme. Prints
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
		return;
    
    lomuto_sort(array, 0, size - 1);
}