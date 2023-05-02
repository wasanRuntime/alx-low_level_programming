#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: pointer to head of the list
 * Return: number of elements (node_count)
 */
size_t print_listint(const listint_t *h)
{
	register size_t node_count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
