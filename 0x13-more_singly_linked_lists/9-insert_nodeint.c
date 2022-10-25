#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to the first node
  * @idx: position of the new node
  * @n: data of the new node
  *
  * Return: Pointer to the new node, or NULL if insert failed.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *lptr, *rptr;

	if (head == NULL || *head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n, new->next = NULL;
	rptr = *head, lptr = NULL;
	while (rptr != NULL)
	{
		if (i == idx && lptr != NULL)
		{
			new->next = rptr, lptr->next = new;
			lptr = NULL, rptr = NULL;
			return (new);
		}
		if (i == idx && lptr == NULL)
		{
			new->next = *head, *head = new;
			lptr = NULL, rptr = NULL;
			return (new);
		}
		i++;
		lptr = rptr;
		rptr = rptr->next;
	}
	free(new), new = NULL, lptr = NULL, rptr = NULL;
	return (NULL);
}
