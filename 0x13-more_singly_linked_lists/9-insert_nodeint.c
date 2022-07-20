#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at an index
 * @head: head of a list
 * @idx: index of the list  wnere the node is added
 * @n: integer element
 * Return: the address of the new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx && n != NULL; i++)
			h = h->next;
	}
	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(size of(listint_t));
	if (new == NULL)
		return (NULL);

	new->next = n;

	if (idx == 0)
	{
		new->next = h->next;
		h->next = new;
	}
	return (new);
}
