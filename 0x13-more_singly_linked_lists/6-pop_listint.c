#include "lists.h"

/**
 * pop_listint - deletes the head nodes of listint_t
 * @head: - pointer to head of the list
 * Return: void
 */

int pop_listint(listint_t **head)
{
	int node;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	return (0);

	temp = *head;
	*head = temp->next;
	node = temp->n;
	free(temp);

	return (node);
}
