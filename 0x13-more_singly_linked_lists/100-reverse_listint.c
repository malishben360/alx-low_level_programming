#include "lists.h"

/**
  * reverse_listint - reverses a linked list
  * @head: piinter to the first list
  *
  * Return: Pointer to the new head, or NULL if failed.
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *lptr, *rptr;

	if (head == NULL || *head == NULL)
		return (NULL);

	lptr = NULL, rptr = NULL;
	while (*head != NULL)
	{
		rptr = (*head)->next;
		(*head)->next = lptr;
		lptr = *head;
		*head = rptr;
	}
	*head = lptr, lptr = NULL, rptr = NULL;
	return (*head);
}
