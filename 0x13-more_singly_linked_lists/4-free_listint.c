#include "lists.h"


/**
 * free_listint - fuction that free a list
 * @head:-pointer to the head of the node
 * Return:void(nothing)
 */

void free_listint(listint_t *head)
{
	listint_t *freed_node;

	while (head != NULL)
	{
		freed_node = head;
		head = head->next;
		free(freed_node);
	}
}
