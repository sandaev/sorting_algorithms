#include "sort.h"

/**
 * insertion_sort_list - This function sorts a dll of integers using
 * the insertion sort algorithm.
 *
 * @list: A pointer to the head of dll
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *insert;
	listint_t *shift;
	listint_t *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (shift = (*list)->next; shift != NULL; shift = temp)
	{
		temp = shift->next;
		insert = shift->prev;
		while (insert != NULL && (shift->n < insert->n))
		{
			swap(list, &insert, shift);
			print_list(*list);
		}

	}
}

/**
 * swap - This function swaps twpo nodes in a ddl
 * @list: Pointer to the head of dll
 * @node_1: pointer to first
 * @node_2: pointer to second node
 */
void swap(listint_t **list, listint_t **node_1, listint_t *node_2)
{
	(*node_1)->next = node_2->next;
	if (node_2->next != NULL)
	{
		node_2->next->prev = *node_1;
	}
	node_2->prev = (*node_1)->prev;
	node_2->next = *node_1;
	if ((*node_1)->prev != NULL)
	{
		(*node_1)->prev->next = node_2;
	}
	else
	{
		*list = node_2;
	}
	(*node_1)->prev = node_2;
	*(node_1) = node_2->prev;
}
