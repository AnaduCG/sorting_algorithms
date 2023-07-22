#include "sort.h"

/**
 *insertion_sort_list - function that sorts a linked list in ascending order
 *@head_ref: pointer to the first node of the linked list
 *
 *
 */
void insertion_sort_list(listint_t **head_ref)
{
	listint_t *current = NULL;
	listint_t *inner = NULL;

	if (*head_ref == NULL || (*head_ref)->next == NULL)
		return;

	current = (*head_ref)->next;

	while (current != NULL)
	{
		inner = current;
		current = current->next;

		while (inner->prev != NULL && inner->n < inner->prev->n)
		{
			swap_nodes(head_ref, inner->prev, inner);
			print_list(*head_ref);
		}
	}
}
