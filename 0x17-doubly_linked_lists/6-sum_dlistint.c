#include "lists.h"

/**
  * sum_dlistint - sum the data(n) of all nodes of a linked list
  * @head: Address of the first node of the linked list
  *
  * Return: The sum nodes data(n), or 0 if empty.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

	sum = 0;
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
