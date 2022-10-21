#include "lists.h"

/**
  * list_len - traverse a singly linked list
  * @h: pointer to the first node
  *
  * Return: Always the list length.
  */
size_t list_len(const list_t *h)
{
	unsigned int count;
	const list_t *ptr;

	if (h == NULL)
		return (0);
	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
