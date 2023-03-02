#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order.
 * @array: array to be sorted.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int len = size;
	int current;
	int swap;
	int min;
	int temp;

	for (current = 0; current < len - 1; current++)
	{
		min = current;
		for (swap = current + 1; swap < len; swap++)
		{
			if (array[swap] < array[min])
				min = swap;
		}
		if (min != current)
		{
			temp = array[current];
			array[current] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
