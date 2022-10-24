#include "lists.h"

/**
  * listint_len - compute the length of a linked list
  * @h: pointer to the first node
  *
  * Return: Always the number of nodes.
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
