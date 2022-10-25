#include "lists.h"

/**
  * delete_nodeint_at_index -  deletes a node at a given position
  * @head: pointer to the first node
  * @index: index of the node
  *
  * Return: Always 1 (Success), or -1 (Fail).
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *lptr, *rptr;

	if (head == NULL || *head == NULL)
		return (-1);

	rptr = *head, lptr = NULL;
	while(rptr != NULL)
	{
		if(i == index && lptr == NULL)
		{
			*head = rptr->next;
			free(rptr);
			rptr = NULL;
			return (1);
		}
		if (i == index && rptr->next == NULL)
		{
			lptr->next = NULL;
			free(rptr), rptr = NULL, lptr = NULL;
			return (1);
		}
		if (i == index)
		{
			lptr->next = rptr->next;
			free(rptr), lptr = NULL, rptr = NULL;
			return (1);
		}
		i++, lptr = rptr, rptr = rptr->next;
	}
	return (-1);
}
