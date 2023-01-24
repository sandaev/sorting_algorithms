#ifndef __SORT_H__
#define __SORT_H__
#include <stddef.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stired in the node
 * @prev: Pointer to the previous elements of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void swap(listint_t **list, listint_t **node_1, listint_t *node_2);
void insertion_sort_list(listint_t **list);

#endif /* #ifndef __SORT_H__ */
