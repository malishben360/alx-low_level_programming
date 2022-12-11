#include "lists.h"

/**
  * free_dlistint - delete all the nodes in a linked list
  * @head: Address of the first node in the list
  *
  * Return: Nothing.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = NULL;
	while (head)
	{
		tmp = head->next;
		head->prev = NULL;
		head->next = NULL;
		free(head);
		head = tmp;
		tmp = NULL;
	}
}
