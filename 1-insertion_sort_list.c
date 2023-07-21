#include "sort.h"
/**
 *swap_nodes - functiono that swaps nodes in a linked list
 *@head_ref: pointer to the first node in the list
 *@node1: node in the linked list to be swapped
 *@node2: node in the linked list to be swapped
 *
 */
void swap_nodes(listint_t **head_ref, listint_t *node1, listint_t *node2)
{
	listint_t *temp =  NULL;

	if (node1 == node2)
		return;
	if (node1->next == node2)
	{
		if (node1->prev)
			node1->prev->next = node2;
		if (node2->next)
			node2->next->prev = node1;
		node1->next = node2->next;
		node2->prev = node1->prev;
		node2->next = node1;
		node1->prev = node2;
		if (*head_ref == node1)
			*head_ref = node2;
	}
	else
	{
		temp = node1->prev;
		node1->prev = node2->prev;
		node2->prev = temp;
		if (node1->prev)
			node1->prev->next = node1;
		if (node2->prev)
			node2->prev->next = node2;
		temp = node1->next;
		node1->next = node2->next;
		node2->next = temp;
		if (node1->next)
			node1->next->prev = node1;
		if (node2->next)
			node2->next->prev = node2;
		if (*head_ref == node1)
			*head_ref = node2;
		else if (*head_ref == node2)
			*head_ref = node1;
	}
}
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
