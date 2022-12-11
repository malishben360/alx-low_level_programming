#include "lists.h"

/**
  * add_dnodeint_end - add a node at the end of a linked list
  * @head: First node of the linked list
  * @n: Integer n
  *
  * Return: The address of the new element, or NULL if failed.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	node->prev = tmp;
	tmp->next = node;

	return (node);
}
