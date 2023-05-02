#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at
* the given index of a linked list.
* @head: head of the list.
* @index: index of the list where the node is deleted
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *previous;
listint_t *nxt;

previous = *head;

if (index != 0)
{
for (i = 0; i < index - 1 && previous != NULL; i++)
{
previous = previous->nxt;
}
}

if (previous == NULL || (previous->nxt == NULL && index != 0))
{
return (-1);
}

nxt = previous->nxt;

if (index != 0)
{
previous->nxt = nxt->nxt;
free(nxt);
}
else
{
free(previous);
*head = nxt;
}

return (1);
}
