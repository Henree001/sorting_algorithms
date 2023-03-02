#include "sort.h"
/**
 * insertion_sort_list - sorts a dlist of ints in ascending order.
 * @list:  list to be sorted in algo.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *second, *rn, *swap2, *temp;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;
	current = *list;
	while (current->next != NULL)
	{
		second = current->next;
		if (second->n < current->n)
		{
			rn = current;
			while (rn != NULL)
			{
				swap2 = rn->next;
				if (swap2->n < rn->n)
				{
					temp = swap2;
					rn->next = temp->next;
					swap2->prev = rn->prev;
					if (swap2->next != NULL)
						swap2->next->prev = rn;
					swap2->next = rn;
					if (rn->prev != NULL)
						rn->prev->next = temp;
					else if (rn->prev == NULL)
						*list = temp;
					rn->prev = temp;
					print_list(*list);
				}
				else
					break;
				rn = swap2->prev; }
		}
		else
			current = current->next; } }
