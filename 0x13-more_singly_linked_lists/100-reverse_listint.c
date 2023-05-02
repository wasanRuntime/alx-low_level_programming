#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to head of the list
 * Return: address of head of list (*head)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt_destn = NULL, *temp_data = NULL, *curr_data = *head;

	if (!head || !(*head))
		return (*head);

	nxt_destn = curr_data->next;
	curr_data->next = NULL;

	while (nxt_destn)
	{
		temp_data = nxt_destn->next;
		nxt_destn->next = curr_data;
		curr_data = nxt_destn;
		nxt_destn = temp_data;
	}
	*head = curr_data;

	return (*head);
}
