#include "lists.h"

/**
  * add_dnodeint - add a node at the begining of a linked list
  * @head: address of the first node
  * @n: integer n
  *
  * Return: The address of the new element, or NULL if failed.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;

	return (node);
}
