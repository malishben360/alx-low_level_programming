#include "lists.h"

/**
  * print_list - transverse a singly linked list, printts
  * the nodes data
  * @h: pointer to the first node
  *
  * Return: Always the list length.
  */
size_t print_list(const list_t *h)
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
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		ptr = ptr->next;
	}
	return (count);
}
