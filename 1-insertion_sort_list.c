#include "sort.h"
/**
 * insertion_sort_list - sort double linkedlist
 * @list: pointer to the head node
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *prev, *key;

	if (*list == NULL)
		return;
	if ((*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		key = current;
		prev = current->prev;
		while (prev != NULL && prev->n > key->n)
		{
			if (prev->prev != NULL)
				prev->prev->next = key;
			if (key->next != NULL)
				key->next->prev = prev;
			prev->next = key->next;
			key->prev = prev->prev;
			prev->prev = key;
			key->next = prev;
			if (key->prev == NULL)
				*list = key;
			else
				key->prev->next = key;
			if (prev->next != NULL)
				prev->next->prev = prev;
			prev = key->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
