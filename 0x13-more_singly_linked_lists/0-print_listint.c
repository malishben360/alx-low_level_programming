#include "lists.h"

/**
  * print_listint - prints the data of a linked list
  * @h: pointer to the first node
  *
  * Return: Always the number of nodes.
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
