#include "lists.h"

/**
  * insert_dnodeint_at_index - insert a node at a ith index
  * @h: Address of the first node
  * @idx: The ith index
  * @n: Data(n) for the new node
  *
  * Return: The address of the new node, or NULL if failed.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len;
	dlistint_t *node, *tmp1, *tmp2;

	if (h == NULL)
		return (NULL);

	if (!(n < 0))
	{
		tmp1 = *h, len = 0;
		while (tmp1 && len != idx)
		{
			len++, tmp1 = tmp1->next;
		}
		if (tmp1 == NULL)
			return (NULL);
	}
	else
	{
		return (NULL);
	}

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (n == 0)
	{
		tmp2 = *h, node->prev = NULL, node->next = tmp2;
		if (tmp2 != NULL)
			tmp2->prev = node;
		*h = node;
	}
	else
	{
		node->prev = tmp1->prev, node->next = tmp1;
		tmp1->prev = node, node->prev->next = node;
	}
	return (node);
}
