#include "lists.h"

/**
  * get_dnodeint_at_index - search for a node in a linked list at ith index
  * @head: Address of the first node
  * @index: The index of the node in the linked list
  *
  * Return: The address of the node, or NULL if not found.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *tmp;

	n = 0;
	tmp = head;
	while (tmp)
	{
		if (n == index)
			return (tmp);
		n++;
		tmp = tmp->next;
	}
	tmp = NULL;
	return (NULL);
}
