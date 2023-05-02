#include "lists.h"

/**
 * free_listint2 - free a given list
 * @head: - pointer to head of list
 * Return:void
 */

void free_listint2(listint_t **head)
{
	listint_t *freed_node, *next_node;

	if (head == NULL)
	return;

	freed_node = *head;

	while (freed_node != NULL)
	{
		next_node = freed_node->next;
		free(freed_node);
		freed_node = next_node;
	}
	*head = NULL;
}
