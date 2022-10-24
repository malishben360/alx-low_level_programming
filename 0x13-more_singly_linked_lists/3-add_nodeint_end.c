#include "lists.h"

/**
  * add_nodeint_end - adds a new node to the end of a list
  * @head: pointer to the first node
  * @n: datum of the new node
  *
  * Return: The pointer to the new node, or NULL if failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
