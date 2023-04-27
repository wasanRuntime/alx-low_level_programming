#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new_n node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new_n node
 *
 * Return: address of the new_n element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = len;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_n;

	return (new_n);
}
