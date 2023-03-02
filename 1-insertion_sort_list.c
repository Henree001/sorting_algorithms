#include "sort.h"
/**
 * insertion_sort_list - sorts a dlist of ints in ascending order.
 * @list:  list to be sorted in algo.
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *temp = *list;
    int key;

    while (temp != NULL)
    {
        /*temp = temp->next;*/
        key = temp->next;
        while (temp->n > key->n && temp->prev != NULL)
        {
            temp->next = temp;
            temp = temp->prev;
        
        }
        temp->next->prev = key;

    }

}