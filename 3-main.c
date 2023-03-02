#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 2, 3, 6, 99, 71, 13, 52, 96, 73, 86, 7}, i;
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    i = partition(array, 0, n - 1);
    /*print_array(array, n);*/
    printf("\n%d\n", i);
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}