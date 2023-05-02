 "lists.h"

/**
* delete_nodeint_at_index - deletes the node at a
* a given index of a linked list.
* @head: head of a list.
* @index: index of the list where the node is
* deleted.
*
* Return: 1 for successand  -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *prev;
listint_t *nxt;

prev = *head;

if (index != 0)
{
for (i = 0; i < index - 1 && prev != NULL; i++)
{
prev = prev->nxt;
}
}

if (prev == NULL || (prev->nxt == NULL && index != 0))
{
return (-1);
}

nxt = prev->nxt;

if (index != 0)
{
prev->nxt = nxt->nxt;
free(nxt);
}
else
{
free(prev);
*head = nxt;
}

return (1);
}
