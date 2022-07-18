#include "lists.h"

/**
 * add_nodeint - function that adds a node at the beginning of a list
 * @n: data to add
 * @head: beginning of the list
 * Return: address of a new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}



