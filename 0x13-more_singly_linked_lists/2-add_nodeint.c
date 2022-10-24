#include "lists.h"

/**
  * add_nodeint - adds a node to a linked list
  * @head: pointer to the first node
  * @n: datum of the new node
  *
  * Return: pointer to the new now, else NULL.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	new->n = n;
	new->next = temp;
	*head = new;
	return (*head);
}
