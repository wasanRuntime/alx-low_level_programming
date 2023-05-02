#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *mangoes, *bananas;

	mangoes = bananas = head;
	while (mangoes && bananas && bananas->next)
	{
		mangoes = mangoes->next;
		bananas = bananas->next->next;
		if (mangoes == bananas)
		{
			mangoes = head;
			break;
		}
	}
	if (!mangoes || !bananas || !bananas->next)
		return (NULL);
	while (mangoes != bananas)
	{
		mangoes = mangoes->next;
		bananas = bananas->next;
	}
	return (bananas);
}
