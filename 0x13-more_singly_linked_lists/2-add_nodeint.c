#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a given list
 * @head: double pointer to head of the list
 * @n: integer to be added to the node
 * Return: address of node added(new_node)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
