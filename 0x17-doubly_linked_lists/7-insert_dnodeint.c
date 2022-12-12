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
	unsigned int index, len;
	dlistint_t *node, *tmp;

	tmp = *h;
	len = 0;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}

	if ((len == 0 && *h == NULL) || len == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}

	node = malloc(sizeof(dlistint_t));
	if (node == NULL || *h == NULL)
		return (NULL);

	tmp = *h;
	index = 0;
	node->n = n;
	while (tmp)
	{
		if (index == idx)
		{
			node->next = tmp;
			node->prev = tmp->prev;
			tmp->prev->next = node;
			tmp->prev = node;
			return (node);
		}
		index++, tmp = tmp->next;
	}
	return (NULL);
}
