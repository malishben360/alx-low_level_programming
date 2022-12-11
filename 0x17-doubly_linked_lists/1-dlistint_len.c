#include "lists.h"

/**
  * dlistint_len - Count the nodes in a linked list
  * @h: address of the first node
  *
  * Return: Length of the linked list, or 0 if h is NULL.
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;
	dlistint_t const *tmp;

	if (h == NULL)
		return (0);

	tmp = h;
	n = 0;
	while (tmp)
	{
		n += 1;
		tmp = tmp->next;
	}

	return (n);
}
