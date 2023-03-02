#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order using the Bubble
 * sort algorithm.
 * @array: array being sorted.
 * @size: Number of elements in an array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int k;

	if (array == NULL)
		return;
	for(i = 0; i < size - 1; i++)
	{
		for(j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
				{
					k = array[j];
					array[j] = array[j + 1];
					array[j + 1] = k;
					print_array(array, size);
				}
		}
	}
}
