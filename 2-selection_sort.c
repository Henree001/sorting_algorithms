#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order.
 * @array: array to be sorted.
 * @size: size of the array.
 */
void selection_sort(int *array, size_t size)
{
    int i, j, min, temp, temp2;
    
    for(i = 0; i < size - 1; i++)
    {
        min = array[i];
        for(j = i + 1; j < size; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                temp = j;
            }
        
        }
        temp2 = array[i];
        array[i] = min;
        array[temp] = temp2;
        print_array(array, size);
    }
}