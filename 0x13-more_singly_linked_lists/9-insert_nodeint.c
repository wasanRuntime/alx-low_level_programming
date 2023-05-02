#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new_node node at a given point.
 * @head: double pointer to the first node in the list
 * @idx: index of the node to be inserted
 * @n: value for new_node
 *
 * Return: pointer to the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *curr_node, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		curr_node = *head;
		for (i = 0; i < idx - 1 && curr_node != NULL; i++)
		{
			curr_node = curr_node->next;
		}
		if (curr_node == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = curr_node->next;
	curr_node->next = new_node;
	return (new_node);
}
