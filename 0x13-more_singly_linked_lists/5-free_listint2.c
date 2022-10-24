#include "lists.h"

/**
  * free_listint2 - deletes all nodes in a linked list from heap
  * and set h to NULL
  * @h: pointer to the first node
  *
  * Return: nothing.
  */
void free_listint2(listint_t **h)
{
	listint_t *ptr;

	if (h != NULL)
	{
		ptr = *h;
		while (ptr != NULL)
		{
			ptr = ptr->next;
			free(*h);
			*h = NULL;
			*h = ptr;
		}
		h = NULL;
	}
}
