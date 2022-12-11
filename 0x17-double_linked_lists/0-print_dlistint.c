#include "lists.h"

/**
  * print_dlistint - Print the data of a linked list
  * @h: address of the first node in the list
  *
  * Return: Number of nodes, or 0 if h is NULL.
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;
	dlistint_t const *tmp;

	if (h == NULL)
		return (0);

	tmp = h;
	n = 0;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		n += 1;
		tmp = tmp->next;
	}

	return (n);
}
