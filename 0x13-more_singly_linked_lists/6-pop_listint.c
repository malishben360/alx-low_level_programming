#include "lists.h"

/**
  * pop_listint - deletes the head node of a linked list
  * @head: double pointer to the head node
  *
  * Return: The head node data, or 0 if head is NULL.
  */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	n = (**head).n;
	temp = (**head).next;
	free(*head);
	*head = temp;
	return (n);
}
