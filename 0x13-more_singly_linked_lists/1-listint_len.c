#include "lists.h"

/**
 * listint_len - returns the number of elements 
 * in linked listint_t list
 * @h: pointer to head of the list
 * Return: number of elements (node_count)
 */
size_t listint_len(const listint_t *h)
{
	register size_t node_count = 0;

	while (h)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
