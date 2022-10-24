#include "lists.h"

/**
  * free_listint - deletes all nodes in a linked list from heap
  * @h: pointer to the first node
  *
  * Return: nothing.
  */
void free_listint(listint_t *h)
{
	listint_t *ptr;

	if (h != NULL)
	{
		ptr = h;
		while (ptr != NULL)
		{
			ptr = ptr->next;
			free(h);
			h = ptr;
		}
		h = NULL;
	}
}
