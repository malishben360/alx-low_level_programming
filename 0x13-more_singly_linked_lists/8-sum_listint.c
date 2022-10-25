#include "lists.h"

/**
  * sum_listint - computes the sum of all the data (n) of a linked list
  * @head: pointer to the first node
  *
  * Return: Computed sum, or 0 if head is NULL.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (head == NULL)
		return (sum);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	ptr = NULL;
	return (sum);
}
